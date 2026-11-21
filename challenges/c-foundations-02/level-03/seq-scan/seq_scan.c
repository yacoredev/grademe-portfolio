#include <unistd.h>

char change_staut(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c + 32);
}

int check_letter(char c1, char c2)
{
	if (c1 == c2)
		return (1);
	if (c1 == change_staut(c2))
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	char *str1;
	char *str2;
	int i;
	int j;
	
	if (argc == 3)
	{
		str1 = argv[1];
		str2 = argv[2];
		j = 0;
		i = 0;
		while (str2[i] && str1[j])
		{
			if (check_letter(str2[i], str1[j]))
				j++;
			i++;
		}
		if (!str1[j])
			write(1, str1, j);
	}
	else
		write(1, "wrong number of arguments", 25);
	write(1, "\n", 1);
	return (0);
}
