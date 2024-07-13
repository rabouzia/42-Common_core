/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 10:45:22 by ramzerk           #+#    #+#             */
/*   Updated: 2024/05/23 11:09:46 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void epur(char *str)
{
	int i = 0;

	while(str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i])
	{
		if((str[i] == ' ' || str[i] == '\t') && (str[i + 1] == ' ' || str[i + 1] == '\t') )	
		{
			while(str[i] == ' ' || str[i] == '\t')
				i++;
			ft_putchar(' ');
		}
		if((str[i] == ' ' || str[i] == '\t') && str[i + 1] == '\0')	
			break;
		ft_putchar(str[i]);
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		epur(av[1]);
	ft_putchar('\n');
}
