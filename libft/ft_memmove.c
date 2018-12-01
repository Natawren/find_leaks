/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnarbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 12:08:07 by mnarbert          #+#    #+#             */
/*   Updated: 2018/11/21 14:33:41 by mnarbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*temp_dest;
	unsigned char	*temp_src;

	i = 0;
	temp_dest = (unsigned char *)dest;
	temp_src = (unsigned char *)src;
	if (dest < src)
		while (i < n)
		{
			temp_dest[i] = temp_src[i];
			i++;
		}
	if (dest > src)
	{
		temp_dest = &temp_dest[n - 1];
		temp_src = &temp_src[n - 1];
		while (n--)
			*temp_dest-- = *temp_src--;
	}
	return (dest);
}
