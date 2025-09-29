/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javierf2 <javierf2@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 19:41:27 by javierf2          #+#    #+#             */
/*   Updated: 2025/07/29 19:41:33 by javierf2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_putstr(char *map_line)
{
	int	i;

	i = 0;
	while (map_line[i] != '\0')
	{
		write(1, &map_line[i], 1);
		i++;
	}
}

void	ft_paint_map(char **map, int line_nbr)
{
	int	i;

	i = 0;
	while (i < line_nbr)
	{
		ft_putstr(map[i]);
		write(1, "\n", 1);
		i++;
	}
}
