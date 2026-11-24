#include <unistd.h>
#include <stddef.h>

size_t	unique_sorted(int *a, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	count;

	count = 0;
	i = 0;
	j = 0;
	while (i < n)
	{
		count++;
		while (!j || (j < n && a[j] == a[j - 1]))
			j++;
		if (j == n)
			break ;
		a[++i] = a[j++];
	}
	return (count);
}

