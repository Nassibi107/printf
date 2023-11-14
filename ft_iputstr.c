#include "ft_printf.h"

void ft_iputstr(char *s,int *bts)
{
    if (!s)
    {
        *bts +=(write(1,"(null)",6));
        return ;
    }
    while (*s)
        ft_iputchar(*(s++),bts);
}
