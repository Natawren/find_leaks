/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnarbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 11:27:06 by mnarbert          #+#    #+#             */
/*   Updated: 2018/11/22 11:27:08 by mnarbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_copy_without_wh(char *fresh, char *str, unsigned int len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i] != '\0' && j < len && len > 0)
	{
		fresh[j] = str[i];
		i++;
		j++;
	}
	fresh[j] = '\0';
	return (fresh);
}

static int		count_chars(char const *str)
{
	unsigned int	i;
	unsigned int	len;

	len = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	if (str[i] != '\0')
	{
		while (str[i] != '\0')
		{
			i++;
			len++;
		}
		i--;
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			i--;
			len--;
		}
	}
	return (len);
}

char			*ft_strtrim(char const *str)
{
	unsigned int	len;
	char			*fresh;

	if (!str)
		return (NULL);
	len = count_chars(str);
	if (!(fresh = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	return (ft_copy_without_wh(fresh, (char*)str, len));
}
