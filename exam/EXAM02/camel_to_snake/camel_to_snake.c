#include <unistd.h>


void ft_putchar(char c)
{
	write(1, &c, 1);
}

void camel(char *str)
{
	int i = 0;
	while(str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			ft_putchar('_');
			ft_putchar(str[i] + 32);
			i++;
			if(str[i] >= 'A' && str[i] <= 'Z')
			{
				ft_putchar('_');
			ft_putchar(str[i] + 32);
			i++;
			}
		}
		ft_putchar(str[i]);
		i++;
	}
}

int main (int ac, char **av)
{
	if (ac == 2)
		camel(av[1]);
	ft_putchar('\n');
}