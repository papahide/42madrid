/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 14:48:35 by paapahid          #+#    #+#             */
/*   Updated: 2025/07/28 22:20:16 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	resultado;
	int	signo;
	int	i;

	i = 0;
	signo = 1;
	while (str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signo = signo * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		resultado = resultado * 10 + str[i] - '0';
		i++;
	}
	return (signo * resultado);
}
/*
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	printf ("%d", ft_atoi(argv[1]));
	return (0);
}*/
