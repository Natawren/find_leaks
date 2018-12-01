/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnarbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 11:59:21 by mnarbert          #+#    #+#             */
/*   Updated: 2018/10/24 17:46:48 by mnarbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*dest;

	if (!(dest = (char*)malloc(sizeof(*dest) * (ft_strlen(src) + 1))))
		return (0);
	ft_strcpy(dest, src);
	return (dest);
}
