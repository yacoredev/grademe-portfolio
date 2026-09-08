int	is_upper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int	tolower(int c)
{
	if (is_upper(c))
		c += 32;
	return (c);
}
