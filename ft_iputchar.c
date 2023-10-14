
#include "ft_printf.h"

void ft_iputchar(char c, int *bts)
{
    (*bts) += write(1, &c, 1);
}