#include <unistd.h>

int	is_apper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	is_lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	main(int argc, char **argv)
{
	char	*str;
	int		repate;

	if (argc == 2)
	{
		str = argv[1];
		while(*str)
		{
			repate = 0;
			if (is_apper(*str))
				repate = *str - 'A';
			else if (is_lower(*str))
				repate = *str - 'a';
			else
				write(1, str, 1);
			while (repate)
			{
				write (1, str, 1);
				repate--;
			}
			str++;
		}
	}
	else
		write(1, "wrong number of arguments", 25);
	write(1, "\n", 1);
	return (0);
}