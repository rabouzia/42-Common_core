/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 17:52:00 by ramzerk           #+#    #+#             */
/*   Updated: 2024/05/06 18:16:16 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int chartobase(char c)
{
	int n;
	if(c >= '0' && c <= '9')
		n = c - '0';
	else if (c >= 'a' && c <=  'f')
		n = c - 'a' + 10;
	else if (c >= 'A' && c <=  'F')
		n = c - 'A' + 10;
	else
		n = -1;
}

int ft_atoi_base(const char *str, int str_base)
{
	int i;
	long int res;
	int sign;
	int current;
	
	i = 0;
	res = 0;
	sign = 0;
	if (str[i] == '-')
		sign = -1;
	if(str[i] == '+' || str[i] == '-')
		i++;
	while(chartobase(str[i]) != -1)
	{
		current = chartobase(str[i]);
		res = res * str_base + current;
		i++:
	}
	return (sign * res);
}