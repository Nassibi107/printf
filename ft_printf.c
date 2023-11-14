
#include "ft_printf.h"

static int printf_lag(char flag, va_list va)
{
    int bts;

    bts = 0;
    if (flag == 'c')
        ft_iputchar(va_arg(va, int), &bts);
    else if (flag == 's')
        ft_iputstr(va_arg(va, char *), &bts);
    else if (flag == 'd' || flag == 'i')
        ft_putnbr(va_arg(va, int ), &bts);
    else if (flag == 'X' || flag == 'x')
        ft_iputnbr_base(va_arg(va, unsigned int), 16, flag, &bts);
    else if (flag == '%')
        ft_iputchar(flag, &bts);
    else if (flag == 'p')
    {
        ft_iputstr("0x", &bts);
        ft_print_hex(va_arg(va,unsigned long long ), &bts);
    }
    else if (flag == 'u')
    {
        ft_putnbr_u(va_arg(va,unsigned int), &bts);
    }
    else
    {
        ft_iputchar(flag,&bts);
    }
    return (bts);
}

int ft_printf(const char *format, ...)
{
    va_list va;
    int     i;
    int     cp;
    va_start(va,format);
    i = 0;
    cp = 0;
      if (!format)
        cp += write(1 , "-1",1);
    while (format[i])
    {
        if (format[i] == '%')
            cp += printf_lag(format[++i],va);
        else
            cp += write(1 , &format[i],1);
        i++;
    }
    va_end(va);
    return (cp);
}
