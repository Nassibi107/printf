#include "printf.h"

int ft_iputnbr_base(long n, int base ,char font)
{
    int cp;
    char *bases;
    if (font == 'X')
        bases = "0123456789ABCDEF";
    else
        bases = "0123456789abcdef";
    if (n < 0)
    {
        write(1, "-", 1);
        return ft_iputnbr_base(-n, base,font) + 1;
    }
    else if (n < base)
        return ft_iputchar(bases[n]);
    else
    {
        cp = ft_iputnbr_base(n / base, base,font);
        return cp + ft_iputnbr_base(n % base, base,font);
    }
}
