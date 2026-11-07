// Return 1 if n is a prime number, 0 otherwise.
// n is between -1000 and 100000.
int	is_prime(int n)
{
	int	i;

	if (n < 2)
		return (0);
	if (n == 2)
		return (1);

	i = 2;
	while (i <= n / i && n % i != 0)
		i++;
	
	if (n % i != 0)
		return (1);
	return (0);
}
