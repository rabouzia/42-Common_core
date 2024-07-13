/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 22:58:15 by ramzerk           #+#    #+#             */
/*   Updated: 2024/05/02 00:14:30 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return i;
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void sandr(char *str, char a, char b)
{
	int i;
	i = 0;
	while(str[i])
	{
		if (str[i] == a)
			str[i] = b;
		ft_putchar(str[i]);
		i++;
	}
}


int main (int ac, char **av)
{
	if (ac == 4 && ft_strlen(av[2]) == 1 && ft_strlen(av[2]) == 1)
		sandr(av[1], av[2][0], av[3][0]);
	ft_putchar('\n');
}