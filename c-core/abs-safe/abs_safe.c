// Return the absolute value of n as a long.
// Widen to long before negating, never after.
long	abs_safe(int n)
{
	long abs = (long)n;
	return ((n < 0) ? -(abs) : abs);
}
