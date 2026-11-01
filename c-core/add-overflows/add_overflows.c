#include <limits.h>

// Return 1 when a + b would fall outside the range of an int, 0 when it fits.
// Decide by comparing a against a bound. Computing a + b is never allowed.
int	add_overflows(int a, int b)
{
	if (a > INT_MAX - b && b > 0)
		return (1);
	if (a < INT_MIN - b && b < 0)
		return (1);
	return (0);
}