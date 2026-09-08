#include <stdlib.h>
#include <unistd.h>

// argv[1] is the height. Print a centered pyramid of '#', one row per line.
// A wrong argument count prints "wrong number of arguments" and a newline.
int	main(int argc, char **argv)
{
	int		count;
	int		nbr;
	int		n;
	int		i;

	if (argc == 2)
	{
		count = 1;
		nbr = atoi(argv[1]);
		n = nbr;
		while(count <= (2 * n))
		{
			i = 1;
			while(i < nbr)
			{
				write(1, " ", 1);
				i++;
			}
			i = 1;
			while(i <= count)
			{
				write(1, "#", 1);
				i++;
			}
			write(1, "\n", 1);
			nbr--;
			count += 2;
		}
	}
	else
		write(1, "wrong number of arguments\n", 26);
	return (0);
}
