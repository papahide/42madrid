/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcordero <pcordero@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 21:28:35 by pcordero          #+#    #+#             */
/*   Updated: 2025/07/27 21:29:16 by pcordero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

void	ft_putstr(char *str)
{
	while ((*str) != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int	ft_check_valid_dict(t_dict *d, int d_size, int size)
{
	int	idx;
	int	max_size;

	max_size = 0;
	idx = 0;
	while (idx < d_size)
	{
		if (d[idx].id > max_size)
			max_size = d[idx].id;
		idx++;
	}
	return ((max_size - 100) > (size + 1));
}

int	ft_check_zeros(char *str)
{
	while (*str != '\0')
	{
		if (*str != '0')
			return (0);
		str++;
	}
	return (1);
}

void	ft_find_in_dict(t_dict *d, int value, int d_size)
{
	int	idx;

	idx = 0;
	while (idx < d_size)
	{
		if (d[idx].id == value)
			ft_putstr(d[idx].word);
		idx++;
	}
}

void	ft_print_num_block(t_dict *d, char *num, int d_size)
{
	int	idx_num;
	int	aux_nb;

	idx_num = 0;
	while (idx_num < 3)
	{
		if (idx_num == 0 && num[idx_num] != '0')
		{
			ft_find_in_dict(d, (num[idx_num] - '0'), d_size);
			ft_find_in_dict(d, 100, d_size);
		}
		if (idx_num == 1 && num[idx_num] > '1')
		{
			ft_find_in_dict(d, (num[idx_num] - '0') * 10, d_size);
			if ((num[idx_num + 1] - '0') != 0)
				ft_find_in_dict(d, (num[idx_num + 1] - '0'), d_size);
		}
		if (idx_num == 1 && num[idx_num] <= '1')
		{
			aux_nb = ((num[idx_num] - '0') * 10) + (num[idx_num + 1] - '0');
			ft_find_in_dict(d, aux_nb, d_size);
		}
		idx_num++;
	}
}
