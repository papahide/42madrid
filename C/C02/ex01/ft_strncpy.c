/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 17:01:15 by paapahid          #+#    #+#             */
/*   Updated: 2025/07/22 18:46:52 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		if (*src != '\0')
		{
			dest[i] = *src;
			src++;
		}
		else
		{
			dest[i] = '\0';
		}
		i++;
		n--;
	}
	return (dest);
}
/*
int	main(void)
{
	char	s[] = "Hola";
	char	d[10];
	char	*dest;
	int	n;

	n = 7;
	dest = ft_strncpy(d, s, n);
	while (n > 0)
	{
		write(1, dest, 1);
		dest++;
		n--;
	}
}*/
