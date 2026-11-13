#include <unistd.h>

int ft_atoi(char *s)
{
	int	nbr;

	nbr = 0;
	while (*s >= '0' && *s <= '9')
	{
		nbr = nbr * 10 + (*s - 48);
		s++;
	}
	return (nbr);
}

void ft_putnbr(int n)
{
	char c;

	if (n > 9)
		ft_putnbr(n / 10);
	c = n % 10 + 48;
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int nbr;
	int sum;
	int i;
	int j;

	if (argc == 2)
	{
		nbr = ft_atoi(argv[1]);
		if (nbr == 2)
		{
			write(1, "2\n", 2);
			return (0);
		}
		sum = (nbr > 2) ? 2 : 0;
		i = 3;
		while (i <= nbr)
		{
			j = 2;
			while (j < i && i % j)
				j++;
			if (j == i)
				sum += i;
			i++;
		}
		ft_putnbr(sum);
		write(1, "\n", 1);
	}
	else
		write(1, "0\n", 2);
	return (0);
}
