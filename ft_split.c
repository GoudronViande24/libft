/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfourni <thfourni@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 17:59:46 by thfourni          #+#    #+#             */
/*   Updated: 2023/04/12 18:38:12 by thfourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	ft_countwords(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}

char	**ft_maketab(char const *s, char c)
{
	char	**tab;
	int		count;
	int		i;
	int		j;

	count = ft_countwords(s, c);
	tab = malloc(sizeof(*s) * (count + 1));
	if (!tab)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			tab[j++] = malloc(sizeof(*s) * (i + 1));
		i++;
	}
	tab[count] = 0;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	tab = ft_maketab(s, c);
	if (!tab)
		return (0);
	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			tab[j][k] = 0;
			j++;
			k = 0;
		}
		else
			tab[j][k++] = s[i];
		i++;
	}
	tab[j][k] = 0;
	return (tab);
}
