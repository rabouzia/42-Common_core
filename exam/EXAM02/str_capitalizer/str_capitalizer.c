/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 15:07:06 by ramzerk           #+#    #+#             */
/*   Updated: 2024/05/19 15:35:03 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int is_min(char c)
{
	if (c >= 'a' && c <= 'z')
		return 1;
	return 0;
}
int is_maj(char c)
{
	if (c >= 'A' && c <= 'Z')
		return 1;
	return 0;
}

void capitalizer(char *str)
{
	int i = 0;
	while(str[i])
	{
		if(is_maj(str[i]))
			str[i] += 32;
		i++;
	}
	i = 0;
	if(is_min(str[0]))
		str[i] -= 32;
	while (str[i])
	{
		if (str[i] == ' ' && is_min(str[i + 1]))
		{	
			ft_putchar(str[i]);
			i++;
			str[i] -= 32;
		}
		ft_putchar(str[i]);
		i++;
	}
}

int main(int ac, char **av)
{
	int i = 1;
	if (ac >= 2)
	{
		while (i < ac)
		{
			capitalizer(av[i]);
			ft_putchar('\n');
			i++;
		}
	}
	else	
		ft_putchar('\n');
}