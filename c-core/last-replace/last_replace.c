#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
}

int	main(int argc, char **argv)
{
	char	*str;
	char	*start;
	char	*target;
	char	*to_find;
	char	*to_replace;

	if (argc == 4)
	{
		str = argv[1];
		to_find = argv[2];
		to_replace = argv[3];
		if (to_find[1] != '\0' || to_replace[1] != '\0')
		{
			write(1, "\n", 1);
			return (0);
		}
		target = 0;
		start = str;
		while(*str)
		{
			if (*str == *to_find)
				target = str;
			str++;
		}
		if (target)
			*target = *to_replace;
		ft_putstr(start);
	}
	else
		write(1, "wrong number of arguments", 25);
	write(1, "\n", 1);
	return (0);
}
