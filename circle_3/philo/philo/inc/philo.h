/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 00:07:27 by ramzerk           #+#    #+#             */
/*   Updated: 2024/07/14 13:57:50 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
#define PHILO_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/time.h>
#include <pthread.h>

#define FIRST 1
#define SECOND 2
#define FORK "has taken a fork"
#define THINK "is thinking"
#define EAT "is eating"
#define SLEEP "is sleeping"
#define DIED "died"

// typedef  t_mutex;

typedef struct s_philo {

	int 			nb_philo;
	int 			life_range;
	int 			eat_time;
	int 			sleep_time;
	int 			must_eat;
	pthread_t 		*philo;
	pthread_mutex_t right_fork;
	pthread_mutex_t left_fork;
} t_philo;


int check_av(char **av);

//############# LIBFT #############/

int	ft_isdigit(int c);
int	ft_atoi(char *str);

#endif