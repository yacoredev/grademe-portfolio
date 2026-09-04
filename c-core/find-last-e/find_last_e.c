#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*str;
	int		i;

	if (argc == 2)
	{
		str = argv[1];
		i = 0;
		while (str[i])
			i++;
		while(i > 0)
			if(str[--i] == 'e')
			{
				write(1, "e", 1);
				break;
			}
	}
	else
		write(1, "e", 1);
	write(1, "\n", 1);
	return (0);
}
