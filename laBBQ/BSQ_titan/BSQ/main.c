/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 20:48:33 by paapahid          #+#    #+#             */
/*   Updated: 2025/07/30 13:15:12 by javierf2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	main(int argc, char *argv[])
{
	int		i;
	char	*buffer;

	i = 1;
	if (argc < 2)
	{
		write(2, "Arg number has to be more than 1", 32);
		return (0);
	}
	while (argc > i)
	{
		buffer = ft_get_buffer(argv[i]);
		ft_getmap(buffer);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
