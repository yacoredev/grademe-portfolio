#include <unistd.h>

void	rec_putnbr(long nbr)
{
	char	c;
	
	if (nbr > 9)
		rec_putnbr(nbr / 10);
	c = nbr % 10 + 48;
	write(1, &c, 1);
}

void	put_number(int n)
{
	long nbr = n;

	if (n == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	rec_putnbr(nbr);
}
