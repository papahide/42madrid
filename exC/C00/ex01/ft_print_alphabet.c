/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 17:46:53 by paapahid          #+#    #+#             */
/*   Updated: 2025/07/14 18:52:51 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	a;

	a = 'a';
	while (a < 'z' + 1)
	{
		write (1, &a, 1);
		a++;
	}
}

/*
int	main(void)
{
	ft_print_alphabet ();
}
*/