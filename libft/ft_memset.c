/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnarbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 18:18:04 by mnarbert          #+#    #+#             */
/*   Updated: 2018/11/21 14:34:54 by mnarbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	size_t			i;
	unsigned char	*temp;

	i = 0;
	if (!n)
		return (dest);
	temp = (unsigned char *)dest;
	while (i < n)
	{
		temp[i] = (unsigned char)c;
		i++;
	}
	return (dest);
}
