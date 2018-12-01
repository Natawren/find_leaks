/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnarbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 15:43:59 by mnarbert          #+#    #+#             */
/*   Updated: 2018/11/21 15:44:00 by mnarbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strequ(char const *s1, char const *s2)
{
	unsigned int		i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[i] != '\0')
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return (0);
		i++;
	}
	if (s1[i] == s2[i])
		return (1);
	return (0);
}
