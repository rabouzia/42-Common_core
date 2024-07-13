/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 00:07:15 by ramzerk           #+#    #+#             */
/*   Updated: 2024/07/13 17:25:19 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"


void init_philo(char **av, t_philo *philo)
{
	philo-> = ft_atoi(av[0]); // number_of_philosophers:
	philo-> = ft_atoi(av[1]); // time_to_die
	philo-> = ft_atoi(av[2]); // time_to_eat
	philo-> = ft_atoi(av[3]); // time_to_sleep
	philo-> = ft_atoi(av[4]); // number_of_times_each_philosopher_must_eat
}

int main(int ac, char **av) 
{ 
	t_philo philo;
	t_data data;
	if (ac == 5 || ac == 6)
	{
		if (!check_av(av + 1))
			return 0;
		init_args(av + 1);
		printf("asds\n");
		return 0;
	}	
	write(2, "Error\nWrong number of arguments\n", 32);
	return 0;
} 

/*
	TODO each philo is thread
	TODO There is one fork between each pair of philosophers. Therefore, if there are several
	philosophers, each philosopher has a fork on their left side and a fork on their right
	side. If there is only one philosopher, there should be only one fork on the table.
	TODO To prevent philosophers from duplicating forks, you should protect the forks state
	with a mutex for each of them.

*/