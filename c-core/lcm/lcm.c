unsigned int lcm(unsigned int a, unsigned int b)
{
	unsigned int lcm;
	unsigned int gcd;
	unsigned int tmp;
	unsigned int a1;
	unsigned int b1;

	a1 = a;
	b1 = b;
	while (b1)
	{
		tmp = a1 % b1;
		a1 = b1;
		b1 = tmp;
	}
	gcd = a1;
	lcm = a / gcd * b;
	return (lcm);
}
