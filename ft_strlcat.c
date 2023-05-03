/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfourni <thfourni@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:19:10 by thfourni          #+#    #+#             */
/*   Updated: 2023/02/21 16:14:55 by thfourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlcat(char *dest, char *src, int len)
{
	int	i;

	i = 0;
	while (dest[i])
		i++;
	while (src[i] && i < len)
	{
		dest[i] = src[i];
		i++;
	}
	return (i);
}
