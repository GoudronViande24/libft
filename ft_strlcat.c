/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfourni <thfourni@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:19:10 by thfourni          #+#    #+#             */
/*   Updated: 2023/05/03 16:46:50 by thfourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dest, char *src, int len)
{
	int	i;
	int	dest_len;
	int	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (!len)
		return (src_len);
	if (len < dest_len)
		src_len += len;
	else
		src_len += dest_len;
	i = 0;
	while (src[i] && (dest_len + i) < len - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = 0;
	return (src_len);
}
