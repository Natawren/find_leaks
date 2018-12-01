/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelelem.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnarbert <mnarbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 16:21:46 by mnarbert          #+#    #+#             */
/*   Updated: 2018/11/30 18:45:51 by mnarbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstdelelem(t_list *list, t_list *list_temp)
{
	t_list		*temp;

	temp = list;
	if (list_temp == temp)
	{
		list = list->next;
		free(temp);
		temp = NULL;
	}
	else
	{
		while (temp->next != list_temp && temp->next)
			temp = temp->next;
		if (list_temp->next == NULL)
			temp->next = NULL;
		else
			temp->next = list_temp->next;
	}
	free(list_temp);
	list_temp = NULL;
	return (list);
}
