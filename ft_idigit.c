#include "ft_printf.h"

void ft_idigit(unsigned int nb, int *bts)
{

   if (nb < 10)
   	ft_iputchar(nb + '0', bts);
   else
   {
      ft_putnbr(nb / 10, bts);
   	ft_putnbr(nb % 10, bts);
   }
}
