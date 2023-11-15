/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iputnbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 09:05:09 by ynassibi          #+#    #+#             */
/*   Updated: 2023/11/15 09:05:09 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_iputnbr_base(long long n, int base, char font, int *bts)
{
	char	*bases;

	if (font == 'X')
		bases = "0123456789ABCDEF";
	else
		bases = "0123456789abcdef";
	if (n < 0)
	{
		*(bts) += write(1, "-", 1);
		n *= -1;
		ft_iputnbr_base(n, base, font, bts);
	}
	else if (n < base)
		return (ft_iputchar(bases[n], bts));
	else
	{
		ft_iputnbr_base(n / base, base, font, bts);
		ft_iputnbr_base(n % base, base, font, bts);
	}
}
