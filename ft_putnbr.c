/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 09:11:54 by ynassibi          #+#    #+#             */
/*   Updated: 2023/11/15 09:14:41 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *bts)
{
	long	nb;

	nb = n;
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
