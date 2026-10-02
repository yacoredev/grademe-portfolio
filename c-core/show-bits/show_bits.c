#include <unistd.h>

void show_bits(unsigned char byte)
{
    int     n = 7;

    while (n >= 0)
    {
        if ((byte >> n) & 1)
            write(1, "1", 1);
        else
            write(1, "0", 1);
        n--;
    }
}