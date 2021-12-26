/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putxdm_upp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glavette <glavette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:18:14 by glavette          #+#    #+#             */
/*   Updated: 2021/12/26 20:09:45 by glavette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/printf.h"

static int	ft_dec_to_hex(unsigned int n)
{
	char	hex[17];
	int		i;

	i = -1;
	while (++i < 10)
		hex[i] = '0' + i;
	i--;
	while (++i < 16)
		hex[i] = 'A' - 10 + i;
	i = 0;
	hex [16] = 0;
	ft_itoa_base(hex, n);
	return (ft_len_num16(n));
}

int	ft_putxdm_upp(va_list ap)
{
	unsigned int	a;

	a = va_arg(ap, unsigned int);
	return (ft_dec_to_hex(a));
}
