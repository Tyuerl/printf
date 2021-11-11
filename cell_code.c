/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cell_code.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glavette <glavette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:51:48 by glavette          #+#    #+#             */
/*   Updated: 2021/11/11 19:06:20 by glavette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <printf.h>

static void	ft_itoa_base1(char *base, unsigned long long n)
{
	int	i;

	i = 0;
	if (!n)
		write(1, "0", 1);
	else if (!(n / 16))
		write(1, &base[n % 16], 1);
	else
	{
		ft_itoa_base1(base, n / 16);
		write(1, &base[n % 16], 1);
	}
}

static int	ft_len_num(unsigned long long n)
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

static int	ft_dec_to_hex1(unsigned long long n)
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
	ft_itoa_base1(hex, n);
	return (ft_len_num(n));
}

int	ft_cell_code(va_list ap)
{
	unsigned long long	n;

	n = va_arg(ap, unsigned long long);
	write(1, "0x", 2);
	return (ft_dec_to_hex1(n) + 2);
}
