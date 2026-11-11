unsigned int gcd(unsigned int a, unsigned int b)
{
	unsigned int	tmp;

	while (b)
	{
		tmp = a % b;
		a = b;
		b = tmp;
	}
	return (a);
}

unsigned int lcm(unsigned int a, unsigned int b)
{
	unsigned int	lcm;

	if (!a || !b)
		return (0);
	lcm = a / gcd(a, b) * b;
	return (lcm);
}
