/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnarbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 14:45:40 by mnarbert          #+#    #+#             */
/*   Updated: 2018/11/21 14:27:25 by mnarbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int symbol)
{
	int		len;

	len = 0;
	len = ft_strlen((char*)str) - 1;
	if (symbol == '\0')
		return ((char*)&str[len + 1]);
	while (len >= 0)
	{
		if (str[len] == (char)symbol)
			return ((char*)&str[len]);
		len--;
	}
	return (NULL);
}
