#include <stdlib.h>
#include <stddef.h>

// Frees the NULL-terminated arr and every string it holds.
// Returns how many strings were freed.
size_t	free_str_array(char **arr)
{
	size_t i = 0;
	// if (!arr)
	// {
	// 	free(arr);
	// 	return (i);
	// }
	while (arr && arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (i);
}
