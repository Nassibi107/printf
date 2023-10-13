
#include "printf.h"

int ft_iputchar(char c)
{
    return write(1, &c, 1);
}