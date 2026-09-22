int	is_space(char c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

int	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int atoi(const char *str)
{
	int	n = 0;
	int	s = 1;

	while (is_space(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			s = -s;
		str++;
	}
	while (is_digit(*str))
	{
		n = n * 10 + (*str - 48);
		str++;
	}
	return (n * s);
}