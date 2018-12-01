/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnarbert <mnarbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 15:15:57 by mnarbert          #+#    #+#             */
/*   Updated: 2018/12/01 17:07:26 by mnarbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

t_list		*ft_lstfd(t_list *list, int fd)
{
	t_list			*list_ptr;

	list_ptr = list;
	while (list_ptr)
	{
		if ((int)list_ptr->fd == fd)
			return (list_ptr);
		list_ptr = list_ptr->next;
	}
	return (NULL);
}

void		ft_free_list_temp(t_list **list_temp)
{
	free((*list_temp)->content);
	(*list_temp)->content = NULL;
	(*list_temp)->size = 0;
}

int			ft_write_to_line(t_list **list_temp, char **line, int ret)
{
	char			*str;
	int				i;

	i = -1;
	if (!(str = ft_memalloc((*list_temp)->size))
					|| !(*line = ft_memalloc((*list_temp)->size)))
		return (-1);
	str = ft_strcpy(str, (*list_temp)->content);
	if (ft_strchr(str, '\n') != NULL || ret == 0)
	{
		ft_free_list_temp(list_temp);
		while (str[++i] != '\n' && str[i] != '\0')
			(*line)[i] = str[i];
		(*line)[i] = '\0';
		if (str[i] != '\0')
		{
			if (!((*list_temp)->content = ft_memalloc(ft_strlen(str) + 1)))
				return (-1);
			(*list_temp)->content = ft_strcpy((*list_temp)->content,
						&str[i + 1]);
			(*list_temp)->size = ft_strlen(&str[i + 1]) + 1;
		}
		ft_strdel(&str);
		return (1);
	}
	ft_strdel(&str);
	return (0);
}

int			ft_write_to_content(t_list **list_temp, char *buf)
{
	char			*str;
	int				len;

	len = ft_strlen(buf);
	if (!(str = ft_memalloc(len + (*list_temp)->size)))
	{
		ft_free_list_temp(list_temp);
		return (-1);
	}	
	str = ft_strcpy(str, (*list_temp)->content);
	str = ft_strjoin(str, buf);
	ft_free_list_temp(list_temp);
	(*list_temp)->content = ft_strdup(str);
	if (!((*list_temp)->content))
	{
		ft_strdel(&str);
		return (-1);
	}	
	(*list_temp)->size = ft_strlen(str) + 1;
	ft_strdel(&str);
	return (1);
}

int			get_next_line(const int fd, char **line)
{
	static t_list	*list;
	t_list			*list_temp;
	char			buf[BUFF_SIZE + 1];
	int				ret;

	if (fd < 0 || !line)
		return (-1);
	// if (ft_strlen(*line) != 0)
	// {
	// 	**line = 0;
	// 	free(*line);
	// }	
	if ((list_temp = ft_lstfd(list, fd)) == NULL)
	{
		if(!(list_temp = ft_lstnew(NULL, 0, fd)))
		{
			free(list_temp);
			list_temp = NULL;
			return (-1);
		}	
		ft_lstadd(&list, list_temp);
	}
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		if (ft_write_to_content(&list_temp, buf) == -1)
		{
			ft_free_list_temp(&list_temp);
			return (-1);
		}	
		if (ft_write_to_line(&list_temp, line, ret) == 1)
			return (1);
		if (ft_write_to_line(&list_temp, line, ret) == -1)
		{
			ft_free_list_temp(&list_temp);
			return (-1);
		}
	}
	if (ret < 0)
	{
		ft_free_list_temp(&list_temp);
		return (-1);
	}	
	if (ret == 0 && list_temp->size > 1)
		return (ft_write_to_line(&list_temp, line, ret)) ? 1 : 0;
	//list = ft_lstdelelem(list, list_temp);
	return (0);
}
