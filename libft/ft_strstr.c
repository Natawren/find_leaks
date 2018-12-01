/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnarbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 15:07:16 by mnarbert          #+#    #+#             */
/*   Updated: 2018/11/21 14:26:02 by mnarbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *src, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (to_find[i] == '\0')
		return (src);
	while (src[i] != '\0')
	{
		while (src[i + j] == to_find[j])
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
