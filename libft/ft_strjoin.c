/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnarbert <mnarbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 15:18:29 by mnarbert          #+#    #+#             */
/*   Updated: 2018/11/30 18:02:02 by mnarbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len_s1;
	int		len_s2;
	char	*fresh;
	int		i;

	i = 0;
	len_s1 = 0;
	len_s2 = 0;
	if (!s1 || !s2)
		return (NULL);
	if (!(fresh = (char *)malloc(sizeof(char) *
					(ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	while (s1[len_s1] != '\0')
	{
		fresh[i] = s1[len_s1];
		i++;
		len_s1++;
	}
	while (s2[len_s2] != '\0')
		fresh[i++] = s2[len_s2++];
	fresh[i] = '\0';
	return (fresh);
}
