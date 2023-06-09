/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfourni <thfourni@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 02:20:06 by thfourni          #+#    #+#             */
/*   Updated: 2023/05/29 15:50:22 by thfourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(char *s, int n)
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (i < n)
	{
		s[i] = 0;
		i++;
	}
}
