/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfourni <thfourni@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:38:55 by thfourni          #+#    #+#             */
/*   Updated: 2023/05/03 16:55:17 by thfourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

int	ft_countdigits(int n)
{
	int	i;

	i = 1;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		neg;

	len = ft_countdigits(n);
	neg = 0;
	if (n < 0)
	{
		neg = 1;
		n = -n;
	}
	str = malloc(sizeof(*str) * (len + neg + 1));
	if (!str)
		return (0);
	str[len + neg] = 0;
	if (neg)
		str[0] = '-';
	while (len--)
	{
		str[len + neg] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}
