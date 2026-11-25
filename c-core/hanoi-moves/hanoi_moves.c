#include <stdlib.h>
#include <unistd.h>

void	hanoi(int n, char A, char B, char C)
{
	if (n == 0)
		return ;
	hanoi(n - 1, A, C, B); 
    write(1, &A, 1);
    write(1, " ", 1);
    write(1, &C, 1);
    write(1, "\n", 1);
    hanoi(n - 1, B, A, C);
}

int	main(int argc, char **argv)
{
	int nbr;

	if (argc == 2)
	{
		nbr = atoi(argv[1]);
		if (nbr > 0)
			hanoi(nbr, 'A', 'B', 'C');
	}
	else
		write(1, "wrong number of arguments\n", 26);
	return (0);
}
