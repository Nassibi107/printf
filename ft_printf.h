#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int     ft_printf(const char *format, ...);
void    ft_iputchar(char c, int *bts);
void    ft_iputstr(char *s, int *bts);
void    ft_iputnbr_base(long n, int base, char font, int *bts);
void    ft_print_hex(unsigned long long n, int *bts) ;
void    ft_idigit(unsigned int nb, int *bts);
void ft_putnbr(int n, int *bts);

#endif