
#include "ft_printf.h"
int ft_print_hex(unsigned long long n)
{
    char *base;

    base = "0123456789abcdef";
    if (n < 16)
    {
        return (base[n % 16]);
    }
    else
    {
       cp = ft_print_hex(n / 16);
       return cp + ft_print_hex(n % 16);
    }
}