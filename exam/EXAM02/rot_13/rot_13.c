/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot13.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:29:54 by ramzerk           #+#    #+#             */
/*   Updated: 2024/05/20 12:42:37 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void rot13(char *str)
{
	int i = 0;
	while(str[i])
	{
		// if(str[i] == 'z' || str[i] == 'Z')
		// 	str[i] -= 13;
		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
			str[i] += 13;
		else if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
			str[i] -= 13;
		ft_putchar(str[i]);
		i++;
	}
	
}

int main(int ac, char **av)
{
	if (ac == 2)
		rot13(av[1]);
	ft_putchar('\n');
}