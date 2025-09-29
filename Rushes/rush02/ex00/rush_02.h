/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_02.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcordero <pcordero@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 17:12:32 by pcordero          #+#    #+#             */
/*   Updated: 2025/07/27 21:22:40 by pcordero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_02_H
# define RUSH_02_H 1
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# define DEFAULT_DICT "./numbers.dict"
# define BUFFER_SIZE 1023

typedef struct Dictionary
{
	int		id;
	char	*word;
}	t_dict;

t_dict	*ft_create_dict_from_file(char *filepath, int *d_size);
char	**ft_split_number(char *number, int *n_size);
void	ft_print_block(t_dict *d, char *b, int d_size, int idx);
void	ft_find_in_dict(t_dict *d, int value, int d_size);
void	ft_print_num_block(t_dict *d, char *num, int d_size);
int		ft_check_valid_dict(t_dict *d, int d_size, int size);
int		ft_check_zeros(char *str);
void	ft_putstr(char *str);

#endif
