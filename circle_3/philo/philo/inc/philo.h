/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 00:07:27 by ramzerk           #+#    #+#             */
/*   Updated: 2024/07/14 18:41:46 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <pthread.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/time.h>
# include <unistd.h>

# define FIRST 1
# define SECOND 2
# define FORK "has taken a fork"
# define THINK "is thinking"
# define EAT "is eating"
# define SLEEP "is sleeping"
# define DIED "died"

# define P_1 "Ibn Battuta"
# define P_2 "Ibn Al-Khattab"
# define P_3 "Ibn Omar"
# define P_4 "Imam Malik"
# define P_5 "Imam Bukhari"
# define P_6 "Imam Muslim"
# define P_7 "Imam Shafi3i"
# define P_8 "Abou Houreyra"
# define P_9 "Ibn Khaldoun"
# define P_10 "Ibn Abbas"

typedef struct s_philo
{
	int				nb_philo;
	int				life_range;
	int				eat_time;
	int				sleep_time;
	int				must_eat;
	int				id;
	pthread_t		*philo;
	struct s_philo	*next;
	pthread_mutex_t	right_fork;
	pthread_mutex_t	left_fork;
}					t_philo;

typedef struct s_data
{

}					t_data;

//########### INIT & CHECK ########/

int					check_av(char **av);
void				init_args(char *av, t_philo *philo);

//############# LIBFT #############/

int					ft_isdigit(int c);
int					ft_atoi(char *str);
#endif
