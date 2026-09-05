int is_power_of_2(unsigned int n)
{
	unsigned int		i;

	if (n == 1)
		return (1);

	i = 2;
	while (i <= n)
	{
		if (i == n)
			return (1);
		i*=2;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", is_power_of_2(8));
	printf("%d\n", is_power_of_2(6));
	printf("%d\n", is_power_of_2(0));
	printf("%d\n", is_power_of_2(1));
	printf("%d\n", is_power_of_2(1024));
	return (0);
}
*/