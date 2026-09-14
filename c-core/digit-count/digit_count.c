// Count the decimal digits of n, sign excluded, with zero written as one digit.
// Never negate n: INT_MIN has no positive counterpart inside an int.
int	digit_count(int n)
{
	long	nbr = n;
	int		count = 0;

	if (nbr == 0)
		return (1);
	else if (nbr < 0)
		nbr = -nbr;
	while (nbr > 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}