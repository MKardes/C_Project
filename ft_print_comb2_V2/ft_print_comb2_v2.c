#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	temp;
	int	n;
	int	i;
	
	n = 1;
	i = 0;
	temp = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == '0')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n*=-1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		temp = temp * 10 + str[i] - 48;
		i++;
	}
	return (temp * n);
}

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_print_comb2(int a)
{
	if (a == -2147483648)
	{
		write(1, "-214748364", 10);
		a = 8;
	}
	else if (a < 0)
	{
		ft_putchar('-');
		ft_print_comb2(a * -1);
	}
	else if (a > 9)
		ft_print_comb2(a / 10);
	if (a >= 0)
		ft_putchar(a % 10 + 48);
}

int	main(int ac, char **av)
{
	if(ac == 2)
	{
		ft_print_comb2(ft_atoi(av[1]));
	}
}
