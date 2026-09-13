#include <limits.h>
int	fits_in_int(long value)	{ return (value >= INT_MIN && value <= INT_MAX); }
