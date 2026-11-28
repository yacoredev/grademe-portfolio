#include <stddef.h>

// Both slices come from the same array, so their addresses are comparable.
// Touching is not overlapping, and an empty slice covers no byte at all.
int	ranges_overlap(const void *a, size_t na, const void *b, size_t nb)
{
	if ((!na || !nb) || (a >= b + nb || b >= a + na))
		return (0);
	return (1);
}
