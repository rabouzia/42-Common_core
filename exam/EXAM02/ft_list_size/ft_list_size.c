/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 10:47:11 by rabouzia          #+#    #+#             */
/*   Updated: 2024/03/09 19:45:57 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

typedef struct s_list
{
	struct s_list	*next;
	void			*data;w
}					t_list;

int	ft_list_size(t_list *begin_list)
{
	int	i;

	i = 1;
	if (!begin_list)
		return (0);
	while (begin_list->next != NULL)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (i);
}
