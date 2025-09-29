/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 20:54:41 by paapahid          #+#    #+#             */
/*   Updated: 2025/07/28 22:07:43 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

unsigned int	ft_charlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	size_s;
	unsigned int	size_d;

	size_s = ft_charlen(src);
	size_d = ft_charlen(dest);
	i = 0;
	if (size <= size_d)
		return (size_s + size);
	while (src[i] && (size_d + i + 1) < size)
	{
		dest[size_d + i] = src[i];
		i++;
	}
	if (size_d + i < size)
		dest[size_d + i] = '\0';
	return (size_s + size_d);
}
/*
int	main(int argc, char *argv[])
{
	char	dest[15] = "Hola";

	if (argc != 2)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	printf("%d\n", ft_strlcat(dest, argv[1], 12));
	printf("%s\n", dest);
}*/