int	is_lower(int c)
{
	return (c >= 97 && c <= 122);
}

int	gm_toupper(int c)
{
	if (is_lower(c))
		c -= 32;
	return (c);
}
