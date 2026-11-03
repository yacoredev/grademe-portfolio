#include <stdlib.h>
#include <unistd.h>

// Each argument is one value. Print its bar: that many '#', then a newline.
// A value that is zero or negative gives an empty line, newline included.
int	main(int argc, char **argv)
{
	int		nbr;
	int		i;

	if (argc != 1)
	{
		i = 1;
		while (i < argc)
		{
			nbr = atoi(argv[i++]);
			while (nbr > 0 && nbr--)
				write(1, "#", 1);
			write(1, "\n", 1);
		}
	}
	else
		write(1, "wrong number of arguments\n", 26);
	return (0);
}
