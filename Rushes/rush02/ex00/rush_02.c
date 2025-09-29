/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcordero <pcordero@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 11:24:18 by pcordero          #+#    #+#             */
/*   Updated: 2025/07/27 19:46:17 by pcordero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

void	ft_rush02(char *number, char *d_filepath)
{
	t_dict	*d;
	char	**n;
	int		d_size;
	int		n_size;
	int		idx;

	d = ft_create_dict_from_file(d_filepath, &d_size);
	n = ft_split_number(number, &n_size);
	if (ft_check_valid_dict(d, d_size, n_size) == 0)
	{
		write(2, "Dict Error\n", 11);
		return ;
	}
	if (ft_check_zeros(number) == 1)
	{
		ft_find_in_dict(d, 0, d_size);
		return ;
	}
	idx = n_size;
	while (idx >= 0)
	{
		ft_print_block(d, n[idx], d_size, idx);
		idx--;
	}
}

int	ft_check_str_number(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if (str[idx] < '0' || str[idx] > '9')
			return (0);
		idx++;
	}
	return (1);
}

int	ft_validate(char *nb, char *d)
{
	int	v_nb;
	int	v_d;

	v_nb = ft_check_str_number(nb);
	v_d = open(d, O_RDONLY);
	close(v_d);
	if (v_nb == 1 && v_d != -1)
		return (1);
	return (0);
}

int	main(int n_args, char **args)
{
	int		is_valid;
	char	*d;
	char	*number;

	is_valid = 0;
	if (n_args == 2)
	{
		d = &DEFAULT_DICT[0];
		number = args[1];
		is_valid = ft_validate(number, d);
	}
	else if (n_args == 3)
	{
		d = args[1];
		number = args[2];
		is_valid = ft_validate(number, d);
	}
	if (is_valid == 1)
		ft_rush02(number, d);
	else
		write(2, "Error\n", 6);
	return (0);
}
