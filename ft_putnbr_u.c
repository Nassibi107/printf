/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:21:22 by ynassibi          #+#    #+#             */
/*   Updated: 2023/11/18 16:10:06 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_u(unsigned int nb, int *bts)
{
	if (nb < 10)
		ft_iputchar(nb + '0', bts);
	else
	{
		ft_putnbr(nb / 10, bts);
		ft_putnbr(nb % 10, bts);
	}
}
