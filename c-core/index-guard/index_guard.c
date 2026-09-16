#include <stddef.h>

int	at_or_default(const int *a, size_t n, long i, int fallback)
{
	return ((i >= 0 && i < (long)n) ? a[i] : fallback);
}
