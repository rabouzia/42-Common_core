/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 14:31:11 by ramzerk           #+#    #+#             */
/*   Updated: 2024/07/15 00:59:27 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	check_av(char **av)
{
	short	i;
	short 	j;
		
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

void	init_philo(char **av, t_philo *philo)
{
	philo->nb_philo = ft_atoi(av[0]);   // number_of_philosophers:
	philo->life_range = ft_atoi(av[1]); // time_to_die
	philo->eat_time = ft_atoi(av[2]);   // time_to_eat
	philo->sleep_time = ft_atoi(av[3]); // time_to_sleep
	philo->must_eat = ft_atoi(av[4]);
	philo->next = NULL;
	// number_of_times_each_philosopher_must_eat
}

t_philo	*ft_lstnew(int id)
{
	t_philo	*res;

	res = malloc(sizeof(t_philo));
	if (!res)
		return (NULL);
	res->id = id;
	res->next = res;
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

void	ft_lstadd_back(t_philo **a, t_philo *new)
{
	t_philo	*last;
	t_philo	*first;

	if (!new)
		return ;
	if (*a)
	{
		first = *a;
		last = ft_lstlast(*a);
		new->next = first;
		printf("\n\n%p\n\n\n", last->id);
		last->next = new;
	}
	else
	{
		*a = new;
		new->next = new;
	}
}

t_philo	init_chain(t_philo *philo)
{
	int		i;
	t_philo	*tmp;
	int		tmp_int;

	i = 0;
	tmp_int = philo->nb_philo;
	tmp = philo;
	tmp = ft_lstnew(i + 1);
	
	philo = philo->next;
	while (i < tmp_int)
	{
		ft_lstadd_back(&tmp, ft_lstnew(i));
		tmp->id = i;
		printf("i = %d, tmp_int = %d\n", i, tmp_int);
		i++;
	}
}

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

void	init_args(char *av, t_philo *philo)
{
	init_philo(av, philo);
	init_chain(philo);
}
