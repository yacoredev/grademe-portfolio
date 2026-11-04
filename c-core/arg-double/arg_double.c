#include <unistd.h>

void	ft_putnbr(int n)
{
	char	c;

	if (n > 9)
		ft_putnbr(n / 10);
	c = n % 10 + 48;
	write(1, &c, 1);
}

// argv[1] holds only decimal digits, worth 0 to 1000000000.
// Print twice that value, then a newline.
int	main(int argc, char **argv)
{
	int		number;
	char 	*str;

	if (argc == 2)
	{
		number = 0;
		str = argv[1];
		while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
			str++;
		while (*str >= '0' && *str <= '9')
		{
			number = number * 10 + (*str - 48);
			str++;
		}
		ft_putnbr(number * 2);
	}
	else
		write(1, "wrong number of arguments", 25);
	write(1, "\n", 1);
	return (0);
}
