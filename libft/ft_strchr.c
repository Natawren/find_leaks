/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnarbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 14:25:02 by mnarbert          #+#    #+#             */
/*   Updated: 2018/11/21 14:32:18 by mnarbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int symbol)
{
	int		i;

	i = 0;
	if (str[i] == '\0' && symbol != '\0')
		return (NULL);
	else if (str[i] == '\0' && symbol == '\0')
		return ((char*)str);
	while (str[i] != 0)
	{
		if (str[i] == (char)symbol)
			return ((char*)&str[i]);
		i++;
	}
	if (symbol == '\0')
		return ((char*)&str[i]);
	return (NULL);
}
