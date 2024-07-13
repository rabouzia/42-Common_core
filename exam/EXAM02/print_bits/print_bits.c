/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 18:16:22 by ramzerk           #+#    #+#             */
/*   Updated: 2024/05/18 18:19:56 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void 	print_bits(unsigned char octet)
{
	int i = 8;
	unsigned char bit;
	
	while(i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}