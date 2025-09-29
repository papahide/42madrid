/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 14:40:31 by paapahid          #+#    #+#             */
/*   Updated: 2025/07/31 19:57:27 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

// int	main(void)
// {
// 	printf("%d", ft_recursive_factorial(4));
// }
