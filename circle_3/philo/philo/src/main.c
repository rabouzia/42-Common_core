/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 00:07:15 by ramzerk           #+#    #+#             */
/*   Updated: 2024/07/17 19:47:03 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void *routine(void *str)
{
	
}

int	main(int ac, char **av)
{
	t_data	data;
	t_philo	*philo;

	philo = NULL;
	bzero(&data, sizeof(t_data));
	if (ac != 5 || ac != 6)
		return (write(2, "Error\nWrong number of arguments\n", 32),0);
	if (!check_av(av + 1))
			return (0);
	init_args(ac, av + 1, &philo, &data);
		// print_philo(&philo);
	return (0);
}

/*
av
[1] number_of_philo
[2]    time_to_die
[3] time_to_eat
[4] time_to_sleep
[5]    number_of_times_each_philosophers_must_eat

// if (ac == 5 || ac == 6)
// {
//     if(!check_av(av))
//         return (0);
// }


	TODO each philo is thread
	TODO There is one fork between each pair of philosophers. Therefore,
		if there are several
	philosophers,
		each philosopher has a fork on their left side and a fork on their right
	side. If there is only one philosopher,
		there should be only one fork on the table.
	TODO To prevent philosophers from duplicating forks,
		you should protect the forks state
	with a mutex for each of them.


philo1 -> philo2 -> philo3 -> philo1

init
lance
routine :
	take fork
		-> left fork or right fork    left fork => philo->fork :: right fork => philo->next->fork mutex_lock(left_fork)
	take fork 2 -> right fork or left fork mutex_lock(right_fork)
	eat
	give back forks
	sleep
*/