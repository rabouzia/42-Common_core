/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 14:31:11 by ramzerk           #+#    #+#             */
/*   Updated: 2024/07/17 18:23:56 by rabouzia         ###   ########.fr       */
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

t_data	*init_philo(int ac, char **av, t_data *data)
{
	data->nb_philo = ft_atoi(av[0]);   // number_of_philosophers:
	data->life_range = ft_atoi(av[1]); // time_to_die
	data->eat_time = ft_atoi(av[2]);   // time_to_eat
	data->sleep_time = ft_atoi(av[3]); // time_to_sleep
	if (ac == 6)
		data->must_eat = ft_atoi(av[4]);
	return (data);
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
	if (!lst)
		return (0);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

void	id_print(t_philo *p)
{
	if (p->id == 1)
		printf("%s\n", P1);
	else if (p->id == 2)
		printf("%s\n", P2);
	else if (p->id == 3)
		printf("%s\n", P3);
	else if (p->id == 4)
		printf("%s\n", P4);
	else if (p->id == 5)
		printf("%s\n", P5);
	else if (p->id == 6)
		printf("%s\n", P6);
	else if (p->id == 7)
		printf("%s\n", P7);
	else if (p->id == 8)
		printf("%s\n", P8);
	else if (p->id == 9)
		printf("%s\n", P9);
	else if (p->id == 10)
		printf("%s\n", P10);
	else
		printf("%d\n", p->id);
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

t_philo	*init_chain(t_philo **philo, t_data *data)
{
	int		i;
	t_philo	*tmp;
	int		tmp_int;

	i = 0;
	tmp_int = data->nb_philo;
	tmp = ft_lstnew(++i);
	*philo = tmp;
	while (i < tmp_int)
	{
		ft_lstadd_back(&tmp, ft_lstnew(i + 1));
		tmp->id = i;
		// printf("i = %d, tmp_int = %d\n, tmp_ptr = %p his tmp->id= %d\n", i, tmp_int, tmp ,tmp->id);
		tmp = tmp->next;
		i++;
	}
	return (*philo);
}

void	print_philo(t_philo *a)
{
	printf("show id :\n");
	while (a)
	{
		id_print(a);
		// printf("id = %d and ptr = %p\n", a->id, a);
		a = a->next;
	}
}

void	init_args(int ac, char **av, t_philo **philo, t_data *data)
{
	data = init_philo(ac, av, data);
	philo = init_chain(philo, data);
	print_philo(philo);
}
