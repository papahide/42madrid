/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 20:14:06 by paapahid          #+#    #+#             */
/*   Updated: 2025/07/30 19:19:18 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && (s1[i] || s2[i]))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}
// #include <stdio.h>
// #include <string.h>
// int	main(int argc, char *argv[])
// {
// 	if (argc == 3)
// 		printf("%d\n", ft_strncmp(argv[1], argv[2], 1));
// 		printf("%d\n", strncmp(argv[1], argv[2], 1));
// }
