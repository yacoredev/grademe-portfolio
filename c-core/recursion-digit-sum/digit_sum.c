// digit_sum(n) is the last digit of n plus digit_sum(n / 10).
// The sign is dropped, and n itself is never negated: -INT_MIN does not fit.
int	digit_sum(int n)
{
	long	nbr = (long)n;

	if (nbr == 0)
		return (0);
	if (nbr < 0)
		nbr = -nbr;
	return ((nbr % 10) + digit_sum(nbr / 10));
}
