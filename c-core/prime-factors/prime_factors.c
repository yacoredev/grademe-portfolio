#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	nbr;
	int	div;
	int first;

	if (argc != 2)
	{
		printf("wrong number of arguments\n");
		return (0);
	}
	nbr = atoi(argv[1]);
	if (nbr == 1)
	{
		printf("1\n");
		return (0);
	}
    first = 0;
	div = 2;
	while (nbr > 1)
	{
        if (nbr % div == 0)
        {
            if (first)
                printf("*");
            printf("%d", div);
            nbr /= div;
            first = 1;
        }
        else
		    div++;
	}
	printf("\n");
	return (0);
}
