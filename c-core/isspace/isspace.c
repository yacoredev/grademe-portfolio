int	isspace(int c)
{
	return ((c >= '\t' && c <= '\r') || c == ' ');
}