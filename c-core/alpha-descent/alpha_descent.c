#include <unistd.h>

void upper_group(char letter)
{
	letter -= 32;
	write(1, &letter, 1);
	letter--;
	write(1, &letter, 1);
}

void lower_group(char letter)
{
	write(1, &letter, 1);
	letter--;
	write(1, &letter, 1);
}

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	int		stat;
	char	c;

	stat = 0;
	c = 'z';
	while (c > 'a')
	{
		if (stat % 2 == 0)
			upper_group(c);
		else
			lower_group(c);
		stat++;
		c -= 2;
	}
	write(1, "\n", 1);
	return (0);
}