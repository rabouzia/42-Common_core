/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 09:18:12 by rabouzia          #+#    #+#             */
/*   Updated: 2023/12/23 11:36:27 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strchr(char *str, char c)
{
    int i = 0;
    
    while(str[i])
    {
        if (str[i] == c)
            return 1;
        i++;
    }
    return 0;
}

void inter(char *s1, char *s2)
{
    int i = 0;
    int j = 0;
    char str[30]= {'\0'};;
    
    while (s1[i])
    {
        if (ft_strchr(s2, s1[i]) && ft_strchr(str, s1[i]) == 0)
        {
            ft_putchar(s1[i]);
            str[j] = s1[i];
            j++;
        }
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 3)
        inter(av[1], av[2]);
    ft_putchar('\n');
    return 0;
}