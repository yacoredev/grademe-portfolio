#include <unistd.h>

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	char	c;
	int		i;

	i = 9;
	while (i >= 0)
	{
		c = i + '0';
		write(1, &c, 1);
		i--;
	}
	write(1, "\n", 1);
	return (0);
}
