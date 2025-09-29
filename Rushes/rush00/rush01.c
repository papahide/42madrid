/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenjo <masenjo@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 15:59:45 by masenjo           #+#    #+#             */
/*   Updated: 2025/07/13 14:54:17 by evaflete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_first_line(int count, int x, int state)
{
	char	first;
	char	last;

	first = '\\';
	last = '/';
	if (state == 1)
	{
		first = '/';
		last = '\\';
	}
	if (count == x)
		ft_putchar(first);
	else if (count == 1)
		ft_putchar(last);
	else
		ft_putchar('*');
}

void	print_middle(int count, int y)
{
	if (count == y || count == 1)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	cont_x;
	int	cont_y;

	cont_x = x;
	cont_y = y;
	while (cont_y > 0)
	{
		while (cont_x > 0)
		{
			if (cont_y == y)
				print_first_line(cont_x, x, 1);
			else if (cont_y == 1)
				print_first_line(cont_x, x, 0);
			else
				print_middle(cont_x, x);
			cont_x--;
		}
		ft_putchar('\n');
		cont_x = x;
		cont_y--;
	}
}
