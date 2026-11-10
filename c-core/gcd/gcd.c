#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int	main(int argc, char **argv)
{
	int n1;
	int n2;
	int tmp;

	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		while(n2)
		{
			tmp = n1 % n2;
			n1 = n2;
			n2 = tmp;
		}
		printf("%d\n", n1);
	}
	else
		printf("wrong number of arguments\n");
	return (0);
}
