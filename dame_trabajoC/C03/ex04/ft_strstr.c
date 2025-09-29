/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 22:10:51 by paapahid          #+#    #+#             */
/*   Updated: 2025/07/28 22:07:23 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>
// #include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] != to_find[j])
			i++;
		else
		{
			while (to_find[j] && (str[i + j] == to_find[j]))
				j++;
			if (to_find[j] == '\0')
				return (&str[i]);
			else
			{
				i++;
				j = 0;
			}
		}
	}
	return (0);
}
/*
int	main(int argc, char *argv[])
{
	if (argc != 3)
	{
		write(2, "Error\n", 6);
	}
	else
	{
		printf("%s", ft_strstr(argv[1], argv[2]));
		printf("%s", strstr(argv[1], argv[2]));
	}
	return (0);
}*/
