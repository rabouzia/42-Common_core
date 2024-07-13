/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 15:44:07 by ramzerk           #+#    #+#             */
/*   Updated: 2024/05/04 16:17:25 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>


size_t ft_strcspn(const char *s, const char *reject)
{
	int i = 0;
	int j = 0;
	while(s[i])
	{
		while(reject[j])
		{
			if (s[i] == reject[j])
				return i;
		}
		j = 0;
		i++;
	}
	return 0;
}
