/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 17:44:58 by paapahid          #+#    #+#             */
/*   Updated: 2025/07/19 21:13:52 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_sort_int_tab(int *tab, int size)
{
        int     temp;
        int     i;

        i = 0;
        while (size > 0)
        {
                i = 0;
                while (i < size - 1)
                {
                        if (tab[i] > tab[i + 1])
                        {
                                temp = tab[i];
                                tab[i] = tab[i + 1];
                                tab[i + 1] = temp;
                        }
                        i++;
                }
                size--;
        }
}

#include <stdio.h>

int     main(void)
{
        int tab[7] = {2,4,6,8,9,1,3};
        ft_sort_int_tab(tab, 7);
        int     i;
        i = 0;
        while (i < 7)
        {
                printf("%d", tab[i]);
                i++;
        }
        return (0);
}
