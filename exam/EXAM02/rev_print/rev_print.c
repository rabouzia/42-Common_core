/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 15:39:21 by ramzerk           #+#    #+#             */
/*   Updated: 2024/05/04 15:44:20 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void rev_print(char *str)
{
	int i;
	while(str[i])
		i++;
	while(i >= 0)
		ft_putchar(str[i--]);
}

	int main (int ac, char **av)
	{
		if (ac == 2)
			rev_print(av[1]);
		ft_putchar('\n');
	}