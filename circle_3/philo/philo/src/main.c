/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 00:07:15 by ramzerk           #+#    #+#             */
/*   Updated: 2024/07/13 15:31:47 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

pthread_mutex_t mutex;
int mail =0;
	// if (ac == 5 || ac == 6)
	// {
	// 	if(!check_av(av))
	// 		return 0;
	// }
// void * routine()
// {
// 	for(int i = 0; i < 10000000; i++)
// 	{
// 		pthread_mutex_lock(&mutex);
// 		mail++;
// 		pthread_mutex_unlock(&mutex);
// 	}
// }

int main(void)//int ac, char **av) 
{ 
	// pthread_t p1, p2, p3, p4;
	// pthread_mutex_init(&mutex, NULL);
	// if (pthread_create(&p1, NULL, &routine, NULL) != 0)
	// 	return 1;
	// if (pthread_create(&p2, NULL, &routine, NULL) != 0)
	// 	return 2;
	// if (pthread_create(&p3, NULL, &routine, NULL) != 0)
	// 	return 1;
	// if (pthread_create(&p4, NULL, &routine, NULL) != 0)
	// 	return 2;
	// if (pthread_join(p1,NULL) != 0)
	// 	return 3;
	// if (pthread_join(p2, NULL) != 0)
	// 	return 4;
	// if (pthread_join(p3,NULL) != 0)
	// 	return 3;
	// if (pthread_join(p4, NULL) != 0)
	// 	return 4;
	// printf("mails = %d", mail);
	// pthread_mutex_destroy(&mutex);
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