#include <stddef.h>

void	*gm_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *byte_d;
	unsigned char *byte_s;
	size_t	i;

	byte_d = (unsigned char *)dst;
	byte_s = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		byte_d[i] = byte_s[i];
		i++;
	}
	return (dst);
}
