/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_magic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcordero <pcordero@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 12:25:08 by pcordero          #+#    #+#             */
/*   Updated: 2025/07/27 19:18:51 by nlicot-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

int	ft_lines_from_dict(char *buffer)
{
	int	nb;

	nb = 0;
	while (*buffer != '\0')
	{
		if (*buffer == '\n')
			nb++;
		buffer++;
	}
	return (nb);
}

int	ft_number_from_dict(char *buffer, int idx_s, int idx_e)
{
	int	nb;

	if (idx_e - idx_s > 3)
	{
		return (100 + ((idx_e - idx_s) / 3));
	}
	else if (idx_e - idx_s == 3)
		return (100);
	else if (idx_e - idx_s == 2)
	{
		nb = 0;
		nb += (buffer[idx_s] - '0') * 10;
		nb += buffer[idx_s + 1] - '0';
	}
	else
		nb = buffer[idx_s] - '0';
	return (nb);
}

char	*ft_string_from_dict(char *buffer, int idx_s, int idx_e)
{
	char	*str;
	int		idx;

	idx = 0;
	str = (char *) malloc((idx_e - idx_s) * sizeof(char));
	while (idx < (idx_e - idx_s))
	{
		str[idx] = buffer[idx_s + idx];
		idx++;
	}
	return (str);
}

void	ft_set_dict(t_dict *d, char *buffer)
{
	int	idx[3];

	while (buffer[idx[0]] != '\0')
	{
		idx[1] = idx[0];
		while (buffer[idx[1]] != ':')
			idx[1]++;
		d[idx[2]].id = ft_number_from_dict(buffer, idx[0], idx[1]);
		idx[1]++;
		idx[0] = idx[1];
		while (buffer[idx[1]] != '\n')
			idx[1]++;
		d[idx[2]].word = ft_string_from_dict(buffer, idx[0], idx[1]);
		idx[1]++;
		idx[0] = idx[1];
		idx[2]++;
	}
}

t_dict	*ft_create_dict_from_file(char *filepath, int *dict_lines)
{
	t_dict	*dictionary;
	int		file;
	char	*buffer;

	buffer = (char *) malloc((BUFFER_SIZE + 1) * sizeof(char));
	file = open(filepath, O_RDONLY);
	read(file, buffer, BUFFER_SIZE);
	*dict_lines = ft_lines_from_dict(buffer);
	dictionary = (t_dict *) malloc((*dict_lines) * sizeof(t_dict));
	ft_set_dict(dictionary, buffer);
	close(file);
	free(buffer);
	return (dictionary);
}
