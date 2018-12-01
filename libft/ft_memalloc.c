/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnarbert <mnarbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 16:41:11 by mnarbert          #+#    #+#             */
/*   Updated: 2018/11/30 17:54:59 by mnarbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void			*temp;

	temp = (void*)malloc(size);
	if (!temp)
		return (NULL);
	ft_bzero(temp, size);
	return ((void*)temp);
}
