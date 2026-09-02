#include <stdlib.h>
#include <unistd.h>

#define int_max 2147483647

// argv[1] is the width, argv[2] the height. Draw the frame of that rectangle:
// '+' corners, '-' on top and bottom, '|' on the sides, spaces inside.
int	main(int argc, char **argv)
{
	int x;
	int	y;
	int	i;
	int	j;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);

		if (x <= 0 || y <= 0)
			return (0);

		j = 1;
		while (j <= y)
		{
			i = 1;
			while (i <= x)
			{
				if ((i == 1 || i == x) && (j == 1 || j == y))
					write(1, "+", 1);
				else if ((i > 1 && i < x) && (j == 1 || j == y))
					write(1, "-", 1);
				else if ((i == 1 || i == x) && (j > 1 && j < y))
					write(1, "|", 1);
				else
					write(1, " ", 1);
				if (x == int_max)
					break;
				i++;
			}
			write(1, "\n", 1);
			if (j == int_max)
				break;
			j++;
		}
	}
	else
		write (1, "wrong number of arguments\n", 26);

	return (0);
}
