/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 14:31:11 by ramzerk           #+#    #+#             */
/*   Updated: 2024/07/15 23:42:06 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	check_av(char **av)
{
	short	i;
	short	j;

	i = 0;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (!ft_isdigit(av[i][j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	init_philo(int ac, char **av, t_philo *philo, t_data *data)
{
	(void)philo;
	data->nb_philo = ft_atoi(av[0]);   // number_of_philosophers:
	data->life_range = ft_atoi(av[1]); // time_to_die
	data->eat_time = ft_atoi(av[2]);   // time_to_eat
	data->sleep_time = ft_atoi(av[3]); // time_to_sleep
	if (ac == 6)
		data->must_eat = ft_atoi(av[4]);
}

t_philo	*ft_lstnew(int id)
{
	t_philo	*res;

	res = malloc(sizeof(t_philo));
	if (!res)
		return (NULL);
	res->id = id;
	res->next = NULL;
	return (res);
}

t_philo	*ft_lstlast(t_philo *lst)
{
	t_philo	*head;

	head = lst;
	if (!head)
		return (0);
	while (head)
	{
		head = head->next;
		if (lst == head)
			break ;
	}
	return (head);
}

void	id_print(t_philo *p)
{
	if (p->id == 1)
		printf("%s", P1);
	if (p->id == 2)
		printf("%s", P2);
	if (p->id == 3)
		printf("%s", P3);
	if (p->id == 4)
		printf("%s", P4);
	if (p->id == 5)
		printf("%s", P5);
	if (p->id == 6)
		printf("%s", P6);
	if (p->id == 7)
		printf("%s", P7);
	if (p->id == 4)
		printf("%s", P8);
	if (p->id == 5)
		printf("%s", P9);
	if (p->id == 6)
		printf("%s", P10);
	else
		printf("%d", p->id);
}

void	ft_lstadd_back(t_philo **lst, t_philo *new)
{
	if (!lst || !new)
		return ;
	if (*lst)
		ft_lstlast(*lst)->next = new;
	else
		*lst = new;
}

// t_philo	init_chain(t_philo *philo)
// {
// 	int		i;
// 	t_philo	*tmp;
// 	int		tmp_int;

// 	i = 0;
// 	tmp_int = philo->nb_philo;
// 	tmp = philo;
// 	tmp = ft_lstnew(i + 1);
// 	philo = philo->next;
// 	while (i < tmp_int)
// 	{
// 		ft_lstadd_back(&tmp, ft_lstnew(i));
// 		tmp->id = i;
// 		printf("i = %d, tmp_int = %d\n", i, tmp_int);
// 		i++;
// 	}
// }

void	print_philo(t_philo *a)
{
	t_philo	*first;

	first = a;
	while (a)
	{
		printf("\nid is %d\n", a->id);
		a = a->next;
		if (a == first)
			break ;
	}
}

void	init_args(int ac, char **av, t_philo *philo, t_data *data)
{
	init_philo(ac, av, philo, data);
	// init_chain(philo);
}
