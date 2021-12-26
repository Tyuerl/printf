/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putunbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glavette <glavette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:57:12 by glavette          #+#    #+#             */
/*   Updated: 2021/12/26 21:57:14 by glavette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/printf.h"

static int	ft_len_num1(unsigned int n)
{
	int	i;

	if (n == 0)
		return (1);
	i = 0;
	if (n < 0)
		i++;
	while (n)
	{
		i++;
		n /= 10;
	}
	return (i);
}

static void	ft_putnbr2(unsigned int n)
{	
	if (n < 10)
		ft_putcharint(n + '0');
	else
	{
		ft_putnbr2(n / 10);
		ft_putcharint(n % 10 + '0');
	}
}

int	ft_putunbr(va_list ap)
{
	int	n;

	n = va_arg(ap, int);
	ft_putnbr2(n);
	return (ft_len_num1(n));
}
