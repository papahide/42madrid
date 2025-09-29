/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 20:14:06 by paapahid          #+#    #+#             */
/*   Updated: 2025/07/26 22:06:13 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && i < (n - 1))
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
// #include <stdio.h>
// #include <string.h>
// int	main(int argc, char *argv[])
// {
// 	if (argc == 3)
// 		printf("%d\n", ft_strncmp(argv[1], argv[2], 4));
// 		printf("%d\n", strncmp(argv[1], argv[2], 4));
// }