/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 11:49:55 by ramzerk           #+#    #+#             */
/*   Updated: 2024/05/23 11:53:53 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void doop(int a, char c, int b)
{
	
	if(c == '+')
		printf("%d", a + b);
	if(c == '-')
		printf("%d", a - b);
	if(c == '*')
		printf("%d", a * b);
	if(c == '/')
		printf("%d", a / b);
	if(c == '%')
		printf("%d", a % b);
}


int main(int ac, char **av)
{
	if (ac == 4)
		doop(atoi(av[1]), av[2][0], atoi(av[3]));
	printf("\n");
}