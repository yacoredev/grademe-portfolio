// clamp must return v held inside lo and hi, and lo when the bounds are inverted.
// This file does not build yet: three diagnostics, clear them one at a time.
int	clamp(int v, int lo, int hi)
{
	int	range;
	
	if (lo == -2147483648)
		range = hi - 2147483647;
	else
		range = hi - lo;
	if (v < lo || range < 0)
		return (lo);
	if (v > hi)
		return (hi);
	else
		return (v);
}
