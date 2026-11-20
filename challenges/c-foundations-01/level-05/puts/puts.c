#include <unistd.h>

int	gm_puts(const char *s)
{
	if (!s)
		return (-1);
	while (*s)
		write(1, s++, 1);
	write(1, "\n", 1);
	return (0);
}
