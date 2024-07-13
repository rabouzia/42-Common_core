/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 10:18:45 by rabouzia          #+#    #+#             */
/*   Updated: 2023/12/24 10:47:23 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int is_letter(char c)
{
    if (c >= 'A' && c <= 'Z')
        return 1;
    if (c >= 'a' && c <= 'z')
        return 1;
    return 0;    
}
void last_word(char *str)
{
    int i = 0;
    while(str[i] == ' ')
        i++;
    while (str[i])
    {
        if(str[i] == ' ' && is_letter(str[i]))
        {
                if(str)
        }
        i++;
    }
    
    
}

int main (int ac, char **av)
{
    if (ac == 2)
        last_word(av[1]);
    ft_putchar('\n');
    return 0;
}