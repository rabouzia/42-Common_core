/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 13:28:03 by ramzerk           #+#    #+#             */
/*   Updated: 2024/05/23 13:31:22 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int lcm(unsigned int a, unsigned int b)
{
	unsigned int n;
	
	if (a == 0 || b == 0)
		return 0;
	if (a > b)
		n = a;
	else
		n = b;
	while(1)
	{
		if (n %a == 0 && n %b == 0)
			return n;
		n++;
	}
}