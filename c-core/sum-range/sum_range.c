// The range is half-open: add the integers from first up to last, last excluded.
// first equal to last means an empty range, whose sum is 0.
// int	sum_range(const int *first, const int *last)
// {
// 	int		sum;

// 	sum = 0;
// 	if (*first != *last)
// 	{
// 		while (first <= last)
// 		{
// 			if (first == last)
// 				sum += *first;
// 			else
// 				sum += *first + *last;
// 			first++;
// 			last--;
// 		}
// 	}
// 	return (sum);
// }

int	sum_range(const int *first, const int *last)
{
	int		sum;

	sum = 0;
	if (first != last)
	{
		while (first != last)
		{
			sum += *first;
			first++;
		}
	}
	return (sum);
}