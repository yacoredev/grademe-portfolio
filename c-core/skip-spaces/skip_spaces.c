int	is_space(const char c)
{
	return (c == '\t' || c == ' ');
}

// Return the address of the first character of s that is not a space or a tab.
// Only the leading run is skipped, and the buffer is never written to.
const char	*skip_spaces(const char *s)
{
	while (is_space(*s))
		s++;
	return (s);
}
