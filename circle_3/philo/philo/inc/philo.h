/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 00:07:27 by ramzerk           #+#    #+#             */
/*   Updated: 2024/07/17 18:31:12 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include "name.h"
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

struct s_data;

typedef struct s_philo
{
	int				id;
	pthread_t		*philo;
	struct s_philo	*next;
	pthread_mutex_t	right_fork;
	pthread_mutex_t	left_fork;
	struct s_data	*data;

}					t_philo;

typedef struct s_data
{
	int				nb_philo;
	int				life_range;
	int				eat_time;
	int				sleep_time;
	int				must_eat;
}					t_data;

//########### INIT & CHECK ########/

int					check_av(char **av);
void				init_args(int ac, char **av, t_philo **philo, t_data *data);

//############# LIBFT #############/

int					ft_isdigit(int c);
int					ft_atoi(char *str);

//############# Test ##############/

void				print_philo(t_philo *a);

#endif
