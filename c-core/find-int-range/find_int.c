// Return the address of the first element of [first, last) equal to value.
// last marks the end: it is a valid answer, never a valid read.
int	*find_int(int *first, int *last, int value)
{
	while (first < last)
	{
		if (*first == value)
			return (first);
		first++;
	}
	return (last);
}
