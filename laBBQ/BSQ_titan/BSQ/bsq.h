/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javierf2 <javierf2@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 19:47:45 by javierf2          #+#    #+#             */
/*   Updated: 2025/07/29 19:47:50 by javierf2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H 10
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

void	ft_paint_map(char **map, int line_nbr);
int		ft_line_lenght(char *buff);
char	*ft_get_buffer(char *file_name);
void	ft_getmap(char *buff);
void	ft_create_matrix(char **map, int line_length, int line_nbr);

#endif