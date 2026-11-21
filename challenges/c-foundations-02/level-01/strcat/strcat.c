char	*gm_strcat(char *dst, const char *src)
{
	int len_dest;
	int i;

	len_dest = 0;
	while (dst[len_dest])
	{
		len_dest++;
	}
	i = 0;
	while (src[i])
	{
		dst[len_dest + i] = src[i];
		i++;
	}
	dst[len_dest + i] = '\0';
	return (dst);
}
