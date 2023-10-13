#include "printf.h"

int ft_iputstr(char *s)
{
    int cp;

    cp = 0;
    while (*s)
        cp += write(1, s++, 1);
    return (cp);
}