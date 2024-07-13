/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 13:15:30 by ramzerk           #+#    #+#             */
/*   Updated: 2024/05/23 13:22:20 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void repeat(char *str)
{
	int i = 0;
	int tmp = 0;
	while(str[i])
	{
		tmp = 0;
		if (str[i] >= 'a' && str[i] <= 'z')
		{	
			tmp = str[i] - 'a' + 1;
			while (tmp--)
				ft_putchar(str[i]);
		}
		else if	(str[i] >= 'A' && str[i] <= 'Z')
		{	tmp = str[i] - 'A' + 1;
			while (tmp--)
				ft_putchar(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

int main(int ac, char **av)
{
	if(ac == 2)
		repeat(av[1]);
	ft_putchar('\n');
}