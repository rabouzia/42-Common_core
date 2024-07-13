/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 13:41:05 by ramzerk           #+#    #+#             */
/*   Updated: 2024/05/20 13:54:57 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>


char **ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char **res = malloc(10000);
	while(str[i] == ' ' || (str[i]>= 9 && str[i] <= 13))
		i++;
	while(str[i])
	{
		if (str[i] > 32)
		{
			res[j] = malloc(1000);
			while(str[i] && str[i] > 32)
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

// int main(void)
// {
// 	int i = 0;
// 	char **res = ft_split("three words apart");
// 	while(res[i])
// 	{
// 		printf("%s\n", res[i]);
// 		i++;
// 	}
// }