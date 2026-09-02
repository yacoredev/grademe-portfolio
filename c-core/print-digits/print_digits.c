#include <unistd.h>

void print_digits(void)
{
    char    c;
    int     i;

    i = 0;
    while (i <= 9)
    {
        c = i + '0';
        write(1, &c, 1);
        i++;
    }
}
