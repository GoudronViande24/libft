/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfourni <thfourni@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 02:38:40 by thfourni          #+#    #+#             */
/*   Updated: 2023/04/17 13:24:51 by thfourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(char *s, int c, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return (0);
}
