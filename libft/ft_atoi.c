/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnarbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 09:54:30 by mnarbert          #+#    #+#             */
/*   Updated: 2018/11/21 14:42:46 by mnarbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_check_n(long long n)
{
	if (n < 0)
		return (-1);
	return (n);
}

int				ft_atoi(const char *str)
{
	int					i;
	long long int		n;
	int					minus;

	n = 0;
	i = 0;
	minus = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
						|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = 10 * n + (str[i++] - '0');
	}
	if (ft_check_n(n) == -1)
		return (minus == -1 ? 0 : -1);
	return (minus * (int)n);
}
