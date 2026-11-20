#include <unistd.h>

void write_str(char *str)
{
	if (!str)
		return ;
	while (*str)
		write(1, str++, 1);
}
