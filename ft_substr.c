/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfourni <thfourni@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 14:39:07 by thfourni          #+#    #+#             */
/*   Updated: 2023/05/03 18:21:15 by thfourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

char	*ft_substr(const char *src, unsigned int start, unsigned int len)
{
	char	*dest;

	if (!src)
		return (0);
	if ((unsigned int)ft_strlen(src) < start)
		len = 0;
	if ((unsigned int)ft_strlen(src + start) < len)
		len = (unsigned int)ft_strlen(src + start);
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (0);
	ft_strlcpy(dest, (char *)(src + start), len + 1);
	return (dest);
}
