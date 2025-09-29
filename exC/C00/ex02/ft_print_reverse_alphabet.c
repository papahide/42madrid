/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 19:20:32 by paapahid          #+#    #+#             */
/*   Updated: 2025/07/14 18:53:39 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	a;

	a = 'z';
	while (a > 'a' - 1)
	{
		write (1, &a, 1);
		a--;
	}
}

/*
int	main(void)
{
	ft_print_reverse_alphabet();
}*/