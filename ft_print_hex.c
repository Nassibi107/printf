/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 09:10:22 by ynassibi          #+#    #+#             */
/*   Updated: 2023/11/15 09:10:22 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hex(unsigned long long n, int *bts)
{
	char	*base;

	base = "0123456789abcdef";
	if (n < 16)
	{
		ft_iputchar(base[n % 16], bts);
		return ;
	}
	else
	{
		ft_print_hex(n / 16, bts);
		ft_print_hex(n % 16, bts);
	}
}
