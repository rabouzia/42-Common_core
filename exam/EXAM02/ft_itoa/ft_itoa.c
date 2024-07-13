/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 11:10:59 by ramzerk           #+#    #+#             */
/*   Updated: 2024/05/23 11:46:19 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_itoa(int nbr)
{
	size_t len;
	long int n;
	char *res;

	n = nbr;
	len = nbr == 0;

	if (n < 0 && ++len)
		n = -n;
	while(nbr && ++len)
		nbr /=10;
	res = malloc(10000);
	*res = '-';
	if (!n)
		*res = '0';
		
	while(n)
	{
		res[--len] = n % 10 + '0';
		n/=10;
	}
	return res;
}