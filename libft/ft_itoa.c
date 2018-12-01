/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnarbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 13:38:10 by mnarbert          #+#    #+#             */
/*   Updated: 2018/11/23 13:27:26 by mnarbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_len_number(long int n)
{
	int				len;

	len = 1;
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static char		*ft_transform_n_to_str(char *str, int len, long int n)
{
	int				i;

	i = 0;
	str[len] = '\0';
	len--;
	while (n > 9)
	{
		str[len] = n % 10 + '0';
		len--;
		n = n / 10;
	}
	str[len] = n + '0';
	return (str);
}

char			*ft_itoa(int nb)
{
	int				i;
	int				len;
	char			*str;
	int				sign;
	long int		n;

	len = 0;
	n = (long int)nb;
	sign = 0;
	i = 0;
	if (n < 0)
	{
		n = (-1) * n;
		sign = 1;
		len += 1;
	}
	len += ft_len_number(n);
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (sign == 1)
	{
		str[i] = '-';
		i++;
	}
	return (ft_transform_n_to_str(str, len, n));
}
