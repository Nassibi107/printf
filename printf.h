#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int ft_printf(const char *format, ...);
int printf_lag(char flag, va_list va);
int ft_iputchar(char c);
int ft_iputstr(char *s);
int ft_iputnbr_base( unsigned long long n, int base, char font);

#endif
