int	gm_isspace(int c)
{
	return ((c >= '\t' && c <= '\r') || c == ' ');
}