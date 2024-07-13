/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 15:36:01 by ramzerk           #+#    #+#             */
/*   Updated: 2024/05/20 21:18:12 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return i;
}

void ft_putstr(char *str)
{
	int i = 0;
	if (!str)
		return;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

char **ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char **res = malloc(10000);
	
	while(str[i] < 32) //== ' ' || str[i] == '\t')
		i++;
	while(str[i])
	{
		if(str[i] > 32)// != ' ' || str[i] == '\t')
		{
			res[j] = malloc(1000);
			while(str[i] && (str[i] > 32))//!= ' ' || str[i] == '\t'))
				res[j][k++] = str[i++];
			res[j][k] = '\0';
			k = 0;
			j++;
		}
		else
			i++;
	}
	res[j] = 0;
	return res;
}

void rostring(char *str)
{
	int i = 1;
	char **print = ft_split(str);
	
	if (ft_strlen(str) == 0)
		return;
	while(print[i])
	{
		ft_putstr(print[i]);
		ft_putchar(' ');
		i++;
	}
	ft_putstr(print[0]);
}

int main(int ac, char **av)
{
	if (ac >= 2)
		rostring(av[1]);
	ft_putchar('\n');
}