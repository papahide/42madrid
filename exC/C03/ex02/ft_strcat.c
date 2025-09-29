/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 20:17:59 by paapahid          #+#    #+#             */
/*   Updated: 2025/07/28 22:07:41 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (*src != '\0')
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(int argc, char *argv[])
{
	if (argc != 3)
		write(2, "Error\n", 6);
	else
		printf("%s", ft_strcat(argv[1], argv[2]));
	return (0);
}*/