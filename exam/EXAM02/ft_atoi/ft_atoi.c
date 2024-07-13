/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 14:39:24 by ramzerk           #+#    #+#             */
/*   Updated: 2024/05/19 15:06:34 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


int ft_atoi(const char *str)
{
	int n = 0 ;
	int sign = 1;
	while(*str == ' ' || (*str >= 9 && *str<= 13))
		str++;
	if (*str == '-')
			sign *= -1;
	if (*str == '-' || *str == '+')
		str++;
	while(*str >= '0' && *str <= '9')
	{
		n = n * 10 - '0' + *str;
		str++;
	}
	return (sign * n);
}

// int main(void)
// {
// 	printf("atoi : %d\n", atoi("-12344!"));
// 	printf("ft_atoi : %d\n", ft_atoi("-12344!"));
// }