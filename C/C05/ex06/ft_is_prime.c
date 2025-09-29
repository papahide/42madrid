/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 18:39:06 by paapahid          #+#    #+#             */
/*   Updated: 2025/07/31 19:44:46 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if ((nb == 0) || (nb == 1))
		return (0);
	else
	{
		while (i < nb)
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
		return (1);
	}
}
/*
int	main(void)
{
	printf("%d", ft_is_prime(7));
}*/
