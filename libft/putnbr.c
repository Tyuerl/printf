/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glavette <glavette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:03:05 by glavette          #+#    #+#             */
/*   Updated: 2021/11/10 17:12:46 by glavette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_putnbr1(va_list ap)
{
	int	n;

	n = va_arg(ap, int);
	ft_putnbr(n);
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(1, '-', 1);
		ft_putnbr_fd(-n);
	}
	else if (n < 10)
		write(1 ,n + '0', 1);
	else
	{
		ft_putnbr_fd(n / 10);
		write(1, n % 10 + '0', 1);
	}
}
