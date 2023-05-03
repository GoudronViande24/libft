/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfourni <thfourni@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 23:42:48 by thfourni          #+#    #+#             */
/*   Updated: 2023/02/16 23:48:28 by thfourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, void *src, int n)
{
	char	*new_dest;
	char	*new_src;

	if (dest == src || n == 0)
		return (dest);
	if (dest < src)
	{
		new_dest = dest;
		new_src = src;
		while (n--)
			*new_dest++ = *new_src++;
	}
	else
	{
		new_dest = dest + n - 1;
		new_src = src + n - 1;
		while (n--)
			*new_dest++ = *new_src++;
	}
	return (dest);
}
