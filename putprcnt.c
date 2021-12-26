/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putprcnt.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glavette <glavette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:52:51 by glavette          #+#    #+#             */
/*   Updated: 2021/12/26 04:37:41 by glavette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/printf.h"

int	ft_putprcnt(va_list ap)
{
	write(1, "%", 1);
	return (1);
}

static int	ft_len_num1(int n)
{
	int	i;

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

static void	ft_putnbr1(int n)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		ft_putnbr1(-n);
	}
	else if (n < 10)
		ft_putcharint(n + '0');
	else
	{
		ft_putnbr1(n / 10);
		ft_putcharint(n % 10 + '0');
	}
}

int	ft_putnbr(va_list ap)
{
	int	n;

	n = va_arg(ap, int);
	ft_putnbr1(n);
	return (ft_len_num1(n));
}
