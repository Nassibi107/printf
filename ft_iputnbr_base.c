#include "ft_printf.h"

void ft_iputnbr_base(long n, int base , char font, int *bts)
{
    char *bases;
    if (font == 'X')
        bases = "0123456789ABCDEF";
    else
        bases = "0123456789abcdef";
    if (n < 0)
    {
        write(1, "-", 1);
        ft_iputnbr_base(-n, base,font,bts);
    }
    else if (n < base)
        return ft_iputchar(bases[n], bts);
    else
    {
        ft_iputnbr_base(n / base, base,font, bts);
        ft_iputnbr_base(n % base, base,font, bts);
    }
}
