/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 12:01:08 by ramzerk           #+#    #+#             */
/*   Updated: 2024/05/23 12:06:47 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void fprime(int p)
{
	int i = 1;
	
	while(p >= ++i)
	{
		if (p % i == 0)
		{
			printf("%d", i);
			if (p == i)
				break;
			printf("*");
			p /=i;
			i = 1;
		}
	}
	
}

int main (int ac, char **av)
{
	if (ac == 2)
		fprime(atoi(av[1]));
	printf("\n");
}
