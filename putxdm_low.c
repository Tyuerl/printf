/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putxdm_low.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glavette <glavette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:34:53 by glavette          #+#    #+#             */
/*   Updated: 2021/11/11 19:44:34 by glavette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_itoa_base(char *base, unsigned int n)
{
	int	i;

	i = 0;
	if (!n)
		write(1, "0", 1);
	else if (!(n / 16))
		write(1, &base[n % 16], 1);
	else
	{
		ft_itoa_base(base, n / 16);
		write(1, &base[n % 16], 1);
	}
}

static int	ft_len_num(unsigned int	n)
{
	int	i;

	i = 0;
	if (n < 0)
		i++;
	while (n)
	{
		i++;
		n /= 16;
	}
	return (i);
}

static int	ft_dec_to_hex(unsigned int n)
{
	char	hex[17];
	 int	i;

	 i = -1;
	 while (++i < 10)
		 hex[i] = '0' + i;
	i--;
	while (++i < 16)
		hex[i] = 'a' - 10 + i;
	i = 0;
	hex [16] = 0;
	ft_itoa_base(hex, n);
	return (ft_len_num(n));
}

int	ft_putxdm_low(va_list ap)
{
	unsigned int	a;

	a = va_arg(ap, unsigned int);
	return (ft_dec_to_hex(a));
}
