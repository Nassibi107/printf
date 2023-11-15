/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 09:16:38 by ynassibi          #+#    #+#             */
/*   Updated: 2023/11/15 09:30:32 by ynassibi         ###   ########.fr       */
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
