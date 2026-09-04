#include <unistd.h>

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	char letter;
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (c % 2 == 0)
			letter = c - 32;
		else
			letter = c;
		write(1, &letter, 1);
		write(1, &letter, 1);
		c++;
	}
	write(1, "\n", 1);
	return (0);
}
