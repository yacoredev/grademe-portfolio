#include <unistd.h>

void find_n(char *str)
{
	while (*str)
	{
		if (*str == 'n')
		{
			write(1, "n", 1);
			break;
		}
		str++;
	}
}

int	main(int argc, char **argv)
{
	char	*str;

	if (argc == 2)
	{
		str = argv[1];
		find_n(str);
	}
	else
		write(1, "wrong number of arguments", 25);
	write(1, "\n", 1);
	return (0);
}
