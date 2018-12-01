/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnarbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 13:57:09 by mnarbert          #+#    #+#             */
/*   Updated: 2018/11/21 14:37:36 by mnarbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	size_t				i;
	unsigned char		*temp_arr;

	i = 0;
	temp_arr = (unsigned char *)arr;
	while (i < n)
	{
		if (temp_arr[i] == (unsigned char)c)
			return ((void*)&temp_arr[i]);
		i++;
	}
	return (NULL);
}
