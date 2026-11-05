#include <unistd.h>

void	ft_putnbr(long n)
{
	char	c;

	if (n > 9)
		ft_putnbr(n / 10);
	c = n % 10 + 48;
	write(1, &c, 1);
}

int		ft_atoi(char *ascii)
{
	int		nbr;
	int		sign;

	sign = 1;
	nbr = 0;
	if (*ascii == '+' || *ascii == '-')
	{
		sign = -sign;
		ascii++;
	}
	while (*ascii >= '0' && *ascii <= '9')
	{
		nbr = nbr * 10 + (*ascii - '0');
		ascii++;
	}
	return (nbr * sign);
}

int	main(int argc, char **argv)
{
	long		sum;
	int		i;

	if (argc > 1)
	{
		i = 1;
		sum = 0;
		while (i < argc)
		{
			sum += ft_atoi(argv[i]);
			i++;
		}
		if (sum < 0)
		{
			write(1, "-", 1);
			sum = -sum;
		}
		ft_putnbr(sum);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
