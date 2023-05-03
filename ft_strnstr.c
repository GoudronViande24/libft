/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfourni <thfourni@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 02:46:45 by thfourni          #+#    #+#             */
/*   Updated: 2023/04/17 13:17:09 by thfourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *s1, char *s2, unsigned int len)
{
	unsigned int	i;

	if (!*s2)
		return (s1);
	i = 0;
	while (s1[i] && i < len)
	{
		if (s1[i] == s2[0])
		{
			if (ft_strncmp(s1 + i, s2, len - i) == 0)
				return (s1 + i);
		}
		i++;
	}
	return (0);
}
