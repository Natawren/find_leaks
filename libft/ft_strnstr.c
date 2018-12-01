/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnarbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 15:21:24 by mnarbert          #+#    #+#             */
/*   Updated: 2018/11/21 14:28:44 by mnarbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *src, char *to_find, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	if (to_find[i] == '\0')
		return (src);
	while (src[i] != '\0' && i < len)
	{
		while (src[i + j] == to_find[j] && i + j < len)
		{
			if (to_find[j] == '\0')
				return (&src[i]);
			j++;
		}
		if (to_find[j] == '\0')
			return (&src[i]);
		i++;
		j = 0;
	}
	return (NULL);
}
