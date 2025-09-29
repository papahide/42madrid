/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions01.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcordero <pcordero@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 21:28:35 by pcordero          #+#    #+#             */
/*   Updated: 2025/07/27 22:41:53 by pcordero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

void	ft_print_block(t_dict *d, char *b, int d_size, int idx)
{
	if ((b[0] != '0') || (b[1] != '0') || (b[2] != '0'))
	{
		ft_print_num_block(d, b, d_size);
		if (idx > 0)
			ft_find_in_dict(d, 100 + idx, d_size);
	}
}
