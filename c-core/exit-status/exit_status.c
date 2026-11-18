#include <limits.h>
#include <unistd.h>

int	ft_atoi(char *str, int *invalide, int *out_range)
{
	long	nbr;
	int		sign;

	if (!*str)
	{
		*invalide = 1;
		return (0);
	}
	sign = 1;
	nbr = 0;
	while (*str >= '\t' && *str <= '\r')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	if(!*str)
	{
		*invalide = 1;
		return (0);
	}
	while (*str >= '0' && *str <= '9')
	{
		nbr = nbr * 10 + (*str - 48);
		str++;
	}
	nbr = nbr * sign;
	if (*str)
	{
		*invalide = 1;
	}
	else
	{
		if (nbr > INT_MAX || nbr < INT_MIN)
		{
			*out_range = 1;
			return (0);
		}
	}
	return (nbr);
}
void ft_putnbr(long n)
{
	char c;

	if (!n)
	{
		write(1, "0", 1);
		return ;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	c = n % 10 + 48;
	write(1, &c, 1);
}
// On success print the sum of the decimal integers in argv, then a newline, and return 0.
// On failure standard output stays empty and the return value is 1, 2 or 3.
int	main(int argc, char **argv)
{
	int invalide;
	int out_range;
	long nbr;
	int	i;

	if (argc >= 2)
	{
		invalide = 0;
		out_range = 0;
		nbr = 0;
		i = 1;
		while (i < argc)
		{
			nbr += ft_atoi(argv[i], &invalide, &out_range);
			if (nbr > INT_MAX || nbr < INT_MIN)
			{
				out_range = 1;
				break;
			}
			if (invalide)
				return (2);
			i++;
		}
		if (out_range)
			return (3);
		if (nbr < 0)
		{
			nbr = -nbr;
			write(1, "-", 1);
		}
		ft_putnbr(nbr);
		write(1, "\n", 1);
	}
	else
		return (1);
	return (0);
}
