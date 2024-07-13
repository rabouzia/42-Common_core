/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 14:31:11 by ramzerk           #+#    #+#             */
/*   Updated: 2024/07/13 17:56:12 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"



int check_av(char **av)
{
	int i;
	i = 0;
	while(av[i])
	{
		if (!ft_isdigit(ft_atoi(av[i])))
			return (0);
		i++;
	}
	return 1;
}

void init_philo(char **av, t_philo *philo)
{
	philo->nb_philo = ft_atoi(av[0]);   // number_of_philosophers:
	philo->life_range = ft_atoi(av[1]); // time_to_die
	philo->eat_time = ft_atoi(av[2]);   // time_to_eat
	philo->sleep_time = ft_atoi(av[3]); // time_to_sleep
	philo->must_eat = ft_atoi(av[4]);  // number_of_times_each_philosopher_must_eat
}