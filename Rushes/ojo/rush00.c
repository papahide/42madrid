/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenjo <masenjo@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 15:59:45 by masenjo           #+#    #+#             */
/*   Updated: 2025/07/12 22:20:53 by masenjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_first_line(int count, int x)
{
	if (count == x || count == 1)
		ft_putchar('o');
	else
		ft_putchar('-');
}

void	print_middle(int count, int y)
{
	if (count == y || count == 1)
		ft_putchar('|');
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
			if (cont_y == y || cont_y == 1)
			{
				print_first_line(cont_x, x);
			}
			else
			{
				print_middle(cont_x, x);
			}
			cont_x--;
		}
		ft_putchar('\n');
		cont_x = x;
		cont_y--;
	}
}
