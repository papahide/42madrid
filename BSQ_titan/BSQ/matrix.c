/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javierf2 <javierf2@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 12:25:58 by javierf2          #+#    #+#             */
/*   Updated: 2025/07/30 12:26:02 by javierf2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_min(int a, int b, int c)
{
	int	min;

	min = a;
	if (b < min)
		min = b;
	if (c < min)
		min = c;
	return (min);
}

void	ft_create_square(char **map, int max_i, int max_j, int max_size)
{
	int	i;
	int	j;

	i = max_i - max_size + 1;
	while (i <= max_i)
	{
		j = max_j - max_size + 1;
		while (j <= max_j)
		{
			map[i][j] = 'x';
			j++;
		}
		i++;
	}
}

void	ft_set_matrix(char **map, int **m, int line_nbr, int line_length)
{
	int	i;
	int	j;
	int	max_size;
	int	max_i;
	int	max_j;

	i = 0;
	max_size = 0;
	max_i = 0;
	max_j = 0;
	while (i < line_nbr)
	{
		j = 0;
		while (j < line_length)
		{
			if (map[i][j] == 'o')
				m[i][j] = 0;
			else if (i == 0 || j == 0)
				m[i][j] = 1;
			else
				m[i][j] = 1 + ft_min(m[i - 1][j], m[i][j - 1], m[i - 1][j - 1]);
			if (m[i][j] > max_size)
			{
				max_size = m[i][j];
				max_i = i;
				max_j = j;
			}
			j++;
		}
		i++;
	}
	ft_create_square(map, max_i, max_j, max_size);
	ft_paint_map(map, line_nbr);
}

void	ft_create_matrix(char **map, int line_length, int line_nbr)
{
	int	**m;
	int	i;
	int	j;

	i = 0;
	j = 0;
	m = (int **) malloc(line_nbr * sizeof(int *));
	if (m == NULL)
		return ;
	while (i < line_nbr)
	{
		m[i] = (int *) malloc(line_length * sizeof(int));
		if (m[i] == NULL)
		{
			while (j < i)
				free(m[j++]);
			free(m);
			return ;
		}
		i++;
	}
	ft_set_matrix(map, m, line_nbr, line_length);
}
