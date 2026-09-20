#include <unistd.h>

int	is_upper(char c)
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
	char	c;
	
	if (argc == 2)
	{
		str = argv[1];
		while (*str)
		{
			c = *str;
			if (is_upper(*str))
				c += 32;
			else if (is_lower(*str))
				c -= 32;
			write(1, &c, 1);
			str++;
		}
	}
	else
		write(1, "wrong number of arguments", 25);
	write(1, "\n", 1);
	return (0);
}