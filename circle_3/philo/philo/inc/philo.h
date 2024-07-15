/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 00:07:27 by ramzerk           #+#    #+#             */
/*   Updated: 2024/07/15 12:43:13 by ramzerk          ###   ########.fr       */
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

# define P1 "Ibn Battuta"
# define P2 "Ibn Al-Khattab"
# define P3 "Ibn Omar"
# define P4 "Imam Malik"
# define P5 "Imam Bukhari"
# define P6 "Imam Muslim"
# define P7 "Imam Shafi3i"
# define P8 "Abou Houreyra"
# define P9 "Ibn Khaldoun"
# define P10 "Ibn Abbas"

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

//############# Test ##############/

void	print_philo(t_philo *a);

#endif
