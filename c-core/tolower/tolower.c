int	is_upper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int	gm_tolower(int c)
{
	if (is_upper(c))
		c += 32;
	return (c);
}
