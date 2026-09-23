#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*param1;
	char	*param2;
	int		see[256] = {0};

	if (argc == 3)
	{
		param2 = argv[2];
		while (*param2)
		{
			param1 = argv[1];
			while (*param1)
			{
				if (*param2 == *param1 && !see[(unsigned char)*param2])
				{
					write(1, param2, 1);
					see[(unsigned char)*param2] = 1;
				}
				param1++;
			}
			param2++;
		}
	}
	else
		write(1, "wrong number of arguments", 25);
	write(1, "\n", 1);
	return (0);
}
