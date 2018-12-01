/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnarbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 11:47:27 by mnarbert          #+#    #+#             */
/*   Updated: 2018/11/21 14:36:26 by mnarbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t count)
{
	unsigned char		*temp_dest;
	const unsigned char	*temp_src;
	size_t				i;

	i = 0;
	temp_dest = (unsigned char *)dest;
	temp_src = (const unsigned char *)src;
	while (i < count)
	{
		temp_dest[i] = temp_src[i];
		if (temp_dest[i] == (unsigned char)c)
			return (&dest[i + 1]);
		i++;
	}
	return (NULL);
}
