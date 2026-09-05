#include <unistd.h>

void ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

int	main(int argc, char **argv)
{
	char	*str;

	if (argc > 1)
	{
		str = argv[argc - 1];
		ft_putstr(str);
	}
	else
		write(1, "wrong number of arguments", 25);
	write(1, "\n", 1);
	return (0);
}
