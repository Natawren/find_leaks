/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnarbert <mnarbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 13:56:43 by mnarbert          #+#    #+#             */
/*   Updated: 2018/11/29 11:43:31 by mnarbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t size, int fd)
{
	t_list	*new;

	if (!(new = malloc(sizeof(t_list))))
		return (NULL);
	if (content)
	{
		new->size = size;
		new->fd = fd;
		if (!(new->content = ft_memalloc(size)))
		{
			free(new);
			new = NULL;
		}
		else
			ft_memcpy(new->content, content, size);
	}
	else
	{
		new->content = NULL;
		new->size = 0;
		new->fd = fd;
	}
	new->next = NULL;
	return (new);
}
