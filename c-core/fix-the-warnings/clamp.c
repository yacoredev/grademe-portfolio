// clamp must return v held inside lo and hi, and lo when the bounds are inverted.
// This file does not build yet: three diagnostics, clear them one at a time.
int	clamp(int v, int lo, int hi)
{
	int	low = lo;
	int	high = hi;
	int	range;
	
	if (low == -2147483648)
		range = (unsigned int)hi - 2147483647;
	else
		range = (unsigned int)high - (unsigned int)low;
	if (v < low || range < 0)
		return (lo);
	if (v > high)
		return (hi);
	else
		return (v);
}
