/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iputstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 09:08:27 by ynassibi          #+#    #+#             */
/*   Updated: 2023/11/15 09:08:27 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_iputstr(char *s, int *bts)
{
	if (!s)
	{
		*bts += (write(1, "(null)", 6));
		return ;
	}
	while (*s)
		ft_iputchar(*(s++), bts);
}
