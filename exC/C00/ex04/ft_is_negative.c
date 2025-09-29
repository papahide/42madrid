/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 19:33:14 by paapahid          #+#    #+#             */
/*   Updated: 2025/07/14 18:56:49 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		n = 'P';
	}
	else
	{
		n = 'N';
	}
	write(1, &n, 1);
}

/*
int	main(void)
{
	ft_is_negative(4);
	ft_is_negative(0);
	ft_is_negative(-3);
}
*/
