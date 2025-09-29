/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 22:27:29 by paapahid          #+#    #+#             */
/*   Updated: 2025/07/20 16:51:40 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			res = 1;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (res);
}
/*
int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(2, "Error\n", 7);
	}
	else
	{
		printf("%d", ft_str_is_lowercase(argv[1]));
	}
}*/
