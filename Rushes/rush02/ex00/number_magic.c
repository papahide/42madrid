/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_magic.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcordero <pcordero@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 11:08:15 by pcordero          #+#    #+#             */
/*   Updated: 2025/07/27 19:29:39 by pcordero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while ((*str) != '\0')
	{
		c++;
		str++;
	}
	return (c);
}

char	**ft_list_init(char **l, int l_size)
{
	int	idx;

	l = (char **) malloc((l_size + 1) * sizeof(char *));
	idx = 0;
	while (idx < l_size)
	{
		l[idx] = (char *) malloc(3 * sizeof(char));
		idx++;
	}
	l[idx] = 0;
	return (l);
}

void	ft_free_list(char **l)
{
	int	idx;

	idx = 0;
	while (l[idx] != 0)
	{
		free(l[idx]);
		idx++;
	}
	free(l);
}

void	ft_set_list(char *num_block, char *num_str, int *number_size)
{
	if ((*number_size) == 1)
	{
		num_block[0] = '0';
		num_block[1] = '0';
		num_block[2] = num_str[(*number_size) - 1];
		(*number_size) -= 1;
	}
	else if ((*number_size) == 2)
	{
		num_block[0] = '0';
		num_block[1] = num_str[(*number_size) - 2];
		num_block[2] = num_str[(*number_size) - 1];
		(*number_size) -= 2;
	}
	else
	{
		num_block[0] = num_str[(*number_size) - 3];
		num_block[1] = num_str[(*number_size) - 2];
		num_block[2] = num_str[(*number_size) - 1];
		(*number_size) -= 3;
	}
}

char	**ft_split_number(char *number, int *n_size)
{
	char	**list;
	int		number_size;
	int		list_size;
	int		idx;

	number_size = ft_strlen(number);
	list_size = (number_size / 3);
	if (number_size % 3 != 0)
		list_size++;
	*n_size = list_size - 1;
	list = 0;
	list = ft_list_init(list, list_size);
	idx = 0;
	while (number_size > 0)
	{
		ft_set_list(list[idx], number, &number_size);
		idx++;
	}
	return (list);
}
