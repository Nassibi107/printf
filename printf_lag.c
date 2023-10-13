
#include "printf.h"

int printf_lag(char flag, va_list va)
{
    int cp;
    
    cp = 0;
    if (flag == 'c')
       cp = ft_iputchar(va_arg(va, int));
    else if (flag == 's')
       cp = ft_iputstr(va_arg(va, char *));
    else if (flag == 'd' || flag == 'i')
       cp = ft_iputnbr_base((long)va_arg(va, int),10,flag);
    else if (flag == 'X' || flag == 'x')
       cp = ft_iputnbr_base((long)va_arg(va, int),16,flag);
    else if (flag == '%')
        cp = ft_iputchar(flag);
    else if (flag == 'p')
    {
       ft_iputstr("0x");
       cp = ft_print_hex((unsigned long long)va_arg(va, int)) + 2;
    }
    return (cp);
}