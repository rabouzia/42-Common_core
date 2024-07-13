/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 09:05:35 by rabouzia          #+#    #+#             */
/*   Updated: 2023/12/23 09:14:11 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ulstr(char *str)
{
    int i = 0;
    
    while(str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        else if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        ft_putchar(str[i]);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        ulstr(av[1]);
    }
    ft_putchar('\n');
    return 0;
}