
#include "ft_printf.h"

void ft_iputnr(int n, int *bts)
{
    if (n == -2147483648)
    {
        (*bts) = write(1, "-2147483648", 11);
        return;
    }
    if (n < 0)
    {
        ft_iputchar('-', bts);
        n *= -1;
    }
    if (n < 10)
        ft_iputchar(n + '0', bts);
    else
    {
        ft_putnbr(n / 10, bts);
        ft_putnbr(n % 10, bts);
    }
}