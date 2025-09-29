/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaflete <evaflete@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 11:53:19 by evaflete          #+#    #+#             */
/*   Updated: 2025/07/13 14:51:35 by evaflete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*(str) != '\0')
	{
		str++;
		count++;
	}
	str -= count;
	return (count);
}

int	ft_atoi(const char *str)
{
	int	ret_v;		
	int	count;

	ret_v = 0;
	count = 0;
	if (*(str) == '0' || *(str) == '-')
		return (0);
	while (*(str) != '\0')
	{
		if (*(str) < 48 || *(str) > 57)
			return (0);
		ret_v = ret_v * 10 + *(str) - '0';
		count++;
		str++;
	}
	str -= count;
	return (ret_v);
}

int	main(int argc, char **argv)
{
	int		num1;
	int		num2;
	int		str_err_count;

	if (argc != 3)
	{
		str_err_count = ft_strlen("Solo dos argumentos tipo int.\n");
		write(1, "Solo dos argumentos tipo int\n", str_err_count);
		return (1);
	}
	num1 = ft_atoi(argv[1]);
	num2 = ft_atoi(argv[2]);
	if (num1 == 0 || num2 == 0)
	{
		str_err_count = ft_strlen("Solo argumentos int, positivo, NO 0.\n");
		write(1, "Solo argumentos int, positivo, NO 0.\n", str_err_count);
		return (1);
	}
	rush(num1, num2);
	return (0);
}
