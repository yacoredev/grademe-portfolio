#include <stdlib.h>
#include <stddef.h>

size_t ft_strlen(const char *str)
{
	const char	*start = str;
	while (*str)
		str++;
	return (str - start);
}

void	ft_putstr(const char *src, char *buff)
{
	while (*src)
		*buff++ = *src++;
	*buff = '\0';
}

char *strdup(const char *src)
{
	char	*buff;

	buff = malloc(ft_strlen(src) + 1);
	if (!buff)
		return (NULL);
	ft_putstr(src, buff);
	return (buff);
}
/*
#include <stdio.h>
int	main()
{
	char *buff_heap = ft_strdup("hello world");
	printf("[%s]", buff_heap);
	free(buff_heap);
}
*/