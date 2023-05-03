/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfourni <thfourni@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 14:39:07 by thfourni          #+#    #+#             */
/*   Updated: 2023/05/03 16:57:31 by thfourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

char	*ft_substr(char const *src, unsigned int start, unsigned int len)
{
	unsigned int	i;
	char			*dest;

	i = 0;
	while (i < start)
	{
		if (!src[i])
			return (0);
		i++;
	}
	dest = malloc(sizeof(*src) * (len + 1));
	if (!dest)
		return (0);
	while (src[i] && i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
