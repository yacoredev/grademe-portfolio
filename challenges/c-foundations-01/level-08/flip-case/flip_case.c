#include <unistd.h>

char change_state(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

int	main(int argc, char **argv)
{
	char c;
	int i;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			c = change_state(argv[1][i]);
			write(1, &c, 1);
			i++;
		}
	}
	else
		write(1, "wrong number of arguments", 25);
	write(1, "\n", 1);
	return (0);
}
