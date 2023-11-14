
#include "ft_printf.h"

void ft_putnbr(int n, int *bts)
{
    long nb = n;
    if (nb < 0)
    {
        ft_iputchar('-', bts);
        nb *= -1;
    }
    if (nb < 10)
        ft_iputchar(nb + '0', bts);
    else
    {
        ft_putnbr(nb / 10, bts);
        ft_putnbr(nb % 10, bts);
    }
}
void ft_putnbr_u(unsigned int nb, int *bts)
{

    if (nb < 10)
        ft_iputchar(nb + '0', bts);
    else
    {
        ft_putnbr(nb / 10, bts);
        ft_putnbr(nb % 10, bts);
    }
}
