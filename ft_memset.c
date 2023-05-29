/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfourni <thfourni@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 23:20:24 by thfourni          #+#    #+#             */
/*   Updated: 2023/05/29 15:19:52 by thfourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, unsigned int n)
{
	unsigned int		i;
	char				*new_dest;

	if (!dest)
		return (NULL);
	i = 0;
	new_dest = dest;
	while (i++ < n)
		*new_dest++ = c;
	return (dest);
}
