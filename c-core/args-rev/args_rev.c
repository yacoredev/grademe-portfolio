#include <unistd.h>

void ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int		i;

	if (argc > 1)
	{
		i = argc - 1;
		while (i > 0)
			ft_putstr(argv[i--]);
	}
	return (0);
}
