#include <unistd.h>

int	ft_atoi(char *s)
{
	int	n = 0;
	int sign = 1;
	while (*s == ' ' || (*s >= '\t' && *s <= '\r'))
		s++;
	if (*s == '+' || *s == '-')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
		n = n * 10 + (*s++ - 48);
	return (n * sign);
}

void	ft_putnbr(int n)
{
	char	c;

	if (n > 9)
		ft_putnbr(n / 10);
	c = n % 10 + 48;
	write(1, &c, 1);
}

void	ft_multipl(int n)
{
	char c;
	int i = 1;

	while (i <= 9)
	{
		c = i + 48;
		write(1, &c, 1);
		write(1, " x ", 3);
		ft_putnbr(n);
		write(1, " = ", 3);
		ft_putnbr(i * n);
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	n;

	if (argc == 2)
	{
		n = ft_atoi(argv[1]);
		ft_multipl(n);
	}
	else
		write(1, "wrong number of arguments\n", 26);
	return (0);
}
