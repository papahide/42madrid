/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_read.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 17:57:12 by paapahid          #+#    #+#             */
/*   Updated: 2025/07/30 13:16:13 by javierf2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_print_map_error(void)
{
	write(2, "map error", 9);
}

int	ft_line_length(char *buf)
{
	int	i;

	i = 0;
	while (*buf != '\n')
		buf++;
	buf++;
	while (*buf != '\n')
	{
		buf++;
		i++;
	}
	return (i + 1);
}

int	ft_get_line_nbr(char *buff)
{
	int		lines_nbr;
	int		i;

	i = 0;
	while (buff[i] >= '0' && buff[i] <= '9')
	{
		lines_nbr = lines_nbr * 10 + buff[i] - '0';
		i++;
	}
	if (lines_nbr <= 0)
	{
		ft_print_map_error();
		return (0);
	}
	return (lines_nbr);
}

int	ft_check_lines(char *buff, int line_length, int line_nbr)
{
	int	i;
	int	j;

	i = 0;
	while (buff[i] != '\n')
		i++;
	i++;
	while (line_nbr != 0)
	{
		j = 0;
		while (buff[i] != '\n')
		{
			if (buff[i] != '.' || buff[i] != 'o')
				return (0);
			j++;
			i++;
		}
		line_nbr--;
		i++;
		if (line_length != j)
			return (0);
	}
	return (1);
}

void	ft_set_map(char *buff, char **map, int lines_nbr)
{
	int	i;
	int	j;

	i = 0;
	while (*buff != '\n')
		buff++;
	buff++;
	while (i < lines_nbr)
	{
		if (*buff == '\n')
			buff++;
		j = 0;
		while (*buff != '\n' && *buff != '\0')
		{
			map[i][j] = *buff;
			j++;
			buff++;
		}
		map[i][j] = '\0';
		i++;
	}
}

char	**ft_createmap(int line_nbr, char *buffer, int line_length)
{
	char	**map;
	int		i;
	int		j;

	i = 0;
	j = 0;
	map = (char **) malloc(line_nbr * sizeof(char *));
	if (map == NULL)
		return (NULL);
	while (i < line_nbr)
	{
		map[i] = (char *) malloc((line_length + 1) * sizeof(char));
		if (map[i] == NULL)
		{
			while (j < i)
				free(map[j++]);
			free(map);
			return (NULL);
		}
		i++;
	}
	ft_set_map(buffer, map, line_nbr);
	return (map);
}
void	ft_getmap(char *buff)
{
	int		line_length;
	int		line_nbr;
	int		i;
	char	**map;

	line_length = ft_line_length(buff);
	line_nbr = ft_get_line_nbr(buff);
	i = ft_check_lines(buff, line_length, line_nbr);
	// if (i == 0)
	// {
	// 	ft_print_map_error();
	// 	return ;
	// }
	map = ft_createmap(line_nbr, buff, line_length);
	ft_paint_map(map, line_nbr);
	write(1, "\n", 1);
	ft_create_matrix(map, line_length, line_nbr);
}

char	*ft_get_buffer(char *file_name)
{
	int		fd;
	char	*buffer;

	buffer = (char *) malloc(sizeof(char) * 1024);
	fd = open (file_name, O_RDONLY);
	read(fd, buffer, 1024);
	return (buffer);
}
