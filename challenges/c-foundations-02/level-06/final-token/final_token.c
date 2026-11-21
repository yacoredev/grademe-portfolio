#include <unistd.h>

int is_space(char c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

int	main(int argc, char **argv)
{
	char *str;
	int i;

	if (argc == 2)
	{
		str = argv[1];
		i = 0;
		while (str[i])
			i++;
		i--;
        while (i >= 0 && is_space(str[i]))
		{
        	i--;
		}
		while (i >= 0 && !is_space(str[i]))
		{
			i--;
		}
		i++;
		while (str[i] && !is_space(str[i]))
		{
			write(1, &str[i++], 1);
		}
	}
	else
		write(1, "wrong number of arguments", 25);
	write(1, "\n", 1);
	return (0);
}
