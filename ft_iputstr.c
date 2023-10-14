#include "ft_printf.h"

void ft_iputstr(char *s,int *bts)
{
    while (*s)
        ft_iputchar(*(s++),bts);
}