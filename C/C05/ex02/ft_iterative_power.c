/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 14:55:01 by paapahid          #+#    #+#             */
/*   Updated: 2025/07/31 19:57:43 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (power > 1)
	{
		nb = nb * nb;
		power--;
	}
	return (nb);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_power(5, 2));
}*/
