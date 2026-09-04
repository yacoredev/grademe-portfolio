#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*str;

	if (argc > 1)
	{
		str = argv[1];
		while (*str)
		{
			write(1, str, 1);
			str++;
		}
	}
	else
		write(1, "wrong number of arguments", 25);
	write(1, "\n", 1);
	return (0);
}
