/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfourni <thfourni@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 23:20:24 by thfourni          #+#    #+#             */
/*   Updated: 2023/04/17 13:25:33 by thfourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *dest, int c, unsigned int n)
{
	unsigned int		i;
	char				*new_dest;

	i = 0;
	new_dest = dest;
	while (i++ < n)
		*new_dest++ = c;
	return (dest);
}
