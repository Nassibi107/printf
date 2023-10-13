
#include "printf.h"

int ft_printf(const char *format, ...)
{
    va_list va;
    int     i;
    int     cp;

    va_start(va,format);
    i = 0;
    cp = 0;
    while (format[i])
    {
        if (format[i] == '%')
            cp += printf_lag(format[i++],va);
        else
            cp += write(1 , &format[i],1);
        i++;
    }
    va_end(va);
    return (cp);
}  