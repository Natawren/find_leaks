/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnarbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 14:04:20 by mnarbert          #+#    #+#             */
/*   Updated: 2018/11/21 14:35:55 by mnarbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
	unsigned char	*temp_arr1;
	unsigned char	*temp_arr2;
	size_t			i;

	temp_arr1 = (unsigned char *)arr1;
	temp_arr2 = (unsigned char *)arr2;
	i = 0;
	while (i < n)
	{
		if (temp_arr1[i] != temp_arr2[i])
			return ((unsigned char)temp_arr1[i] - (unsigned char)temp_arr2[i]);
		i++;
	}
	return (0);
}
