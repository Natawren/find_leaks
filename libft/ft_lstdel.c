/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnarbert <mnarbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 14:31:52 by mnarbert          #+#    #+#             */
/*   Updated: 2018/11/29 15:41:44 by mnarbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*temp;

	if (alst)
	{
		while (*alst)
		{
			temp = (*alst)->next;
			del((*alst)->content, (*alst)->size);
			free(*alst);
			*alst = temp;
		}
		*alst = NULL;
	}
}
