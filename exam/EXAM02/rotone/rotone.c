/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 16:49:06 by ramzerk           #+#    #+#             */
/*   Updated: 2024/05/18 18:15:00 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar (char c)
{
	write(1, &c, 1);
}

void rotone(char *str)
{
	int i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'y') || (str[i] >= 'A' && str[i] <= 'Y'))
			str[i] += 1;
		else if (str[i] == 'z')
			str[i] = 'a';
		else if (str[i] == 'Z')
			str[i] = 'A';
		ft_putchar(str[i]);
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		rotone(av[1]);
	ft_putchar('\n');
}