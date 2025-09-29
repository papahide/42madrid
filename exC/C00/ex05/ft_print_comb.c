/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 21:32:18 by paapahid          #+#    #+#             */
/*   Updated: 2025/07/14 19:00:40 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>	

void	ft_print_comb(void)
{
	char	num[3];

	num[0] = '0';
	while (num[0] <= '7')
	{
		num[1] = num[0] + 1;
		while (num[1] <= '8')
		{
			num[2] = num[1] + 1;
			while (num[2] <= '9')
			{
				write (1, num, 3);
				if (num[0] != '7')
				{
					write (1, ", ", 2);
				}
				num[2]++;
			}
			num[1]++;
		}
		num[0]++;
	}
}

/*
int	main(void)
{
	ft_print_comb();
}
*/