/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 11:55:14 by ramzerk           #+#    #+#             */
/*   Updated: 2024/05/23 12:00:45 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int n)
{
	if (n > 9)
	{
		ft_putnbr(n %10);
		ft_putnbr(n /10);
	}
	else
		ft_putchar(n + '0');
}

int main(int ac, char **av)
{
	(void) av;
	ft_putnbr(ac - 1);
	ft_putchar('\n');
}
