// month runs from 1 for January to 12 for December, and only February
// looks at year. A number outside that range has no length to report.
int	days_in_month(int year, int month)
{
	if (month >= 1 && month <= 12)
	{
		if (month == 2)
		{
			if ((year % 4 == 0) && (year % 100 != 0 || year % 400 == 0))
				return (29);
			else
				return (28);
		}
		else if (month == 1
				|| month == 3
				|| month == 5
				|| month == 7
				|| month == 8
				|| month == 10
				|| month == 12) return (31);
		else if (month == 4
				|| month == 6
				|| month == 9
				|| month == 11 ) return (30);
	}
	return (-1);
}