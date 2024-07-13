/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:17:33 by ramzerk           #+#    #+#             */
/*   Updated: 2024/05/06 15:20:32 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strrev(char *str)
{
	int i = -1;
	int length = 0;
	char temporary;

	while (str[length])
		length++;
	while (++i < length / 2)
	{
		temporary = str[i];
		str[i] = str[length - 1 - i];
		str[length - 1 - i] = temporary;
	}
	return (str);
}

int main(void)
{
	char * str;
	str = ft_strrev("ok mec tes ouf");
	printf("%s",str );	
	printf("ok mec tes ouf");
}