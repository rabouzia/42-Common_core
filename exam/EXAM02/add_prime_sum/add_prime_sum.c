/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:47:51 by ramzerk           #+#    #+#             */
/*   Updated: 2024/05/20 13:39:14 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	long n;

	n = nb;
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}

int ft_atoi(char *str)
{
	int n = 0;
	while(*str)
	{
		n *= 10;
		n = n - '0' + *str;
		++str;
	}
	return n;
}

int is_prime(int n)
{
	int i = 2;

	if (n < 2)
		return 0;
	while( i <= n / i)
	{
		if (n % i == 0)
			return 0;
		i++;
	}
	return 1; 
}

void add_sum_prime(int n)
{
	int res = 0;
	while(n)
	{
		if (is_prime(n))
			res += n;
		n--;
	}
	ft_putnbr(res);
}

int main (int ac, char **av)
{
	if ( ac == 2)
		add_sum_prime(ft_atoi(av[1]));
	else
		ft_putnbr(0);
	ft_putchar('\n');
}