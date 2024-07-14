/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 14:31:11 by ramzerk           #+#    #+#             */
/*   Updated: 2024/07/14 18:43:55 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	check_av(char **av)
{
	short	i;

	i = 0;
	while (av[i])
	{
		if (!ft_isdigit(ft_atoi(av[i])))
			return (0);
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
	philo->must_eat = ft_atoi(av[4]);   // number_of_times_each_philosopher_must_eat
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
	if (!lst)
		return (0);
	while (lst->next != NULL)
	{
		lst = lst->next;
		if (lst->next == head)
			break ;
	}
	return (lst);
}

void	ft_lstadd_back(t_philo **a, t_philo *new)
{
	t_philo	*last;
	t_philo	*first;

	if (!new)
		return;
	if (*a)
	{
		first = *a;
		last = ft_lstlast(a);
		new->next = first;
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
	int tmp;
	tmp = philo->nb_philo;
	i = 0;
	tmp = philo;
	while (i < philo->nb_philo)
	{
		tmp = ft_lstnew(i + 1);
		i++;
	}
}

void print_philo(t_philo *a)
{
	t_philo *first;
	first = a;

	while(a)
	{
		printf("",philo->id)
	}
}

void	init_args(char *av, t_philo *philo)
{
	init_philo(av, philo);
}
