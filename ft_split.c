/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfourni <thfourni@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:26:38 by thfourni          #+#    #+#             */
/*   Updated: 2023/05/03 18:35:36 by thfourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

static unsigned int	ft_countwords(const char *s, char c)
{
	unsigned int	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char			**tab;
	unsigned int	i;
	unsigned int	j;

	if (!s)
		return (0);
	i = 0;
	tab = malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (!tab)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			j = 0;
			while (*s && *s != c && ++j)
				s++;
			tab[i++] = ft_substr(s - j, 0, j);
		}
		else
			s++;
	}
	tab[i] = 0;
	return (tab);
}
