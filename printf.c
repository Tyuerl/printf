/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glavette <glavette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:52:05 by glavette          #+#    #+#             */
/*   Updated: 2021/12/26 22:17:53 by glavette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/printf.h"

int	ft_prcnt(const char *str, va_list ap)
{
	int	count;

	count = 0;
	if (*str == 'c')
		count += ft_putchar(ap);
	if (*str == 's')
		count += ft_putstr(ap);
	if (*str == 'p')
		count += ft_cell_code(ap);
	if (*str == 'd' || *str == 'i')
		count += ft_putnbr(ap);
	if (*str == 'u')
		count += ft_putunbr(ap);
	if (*str == 'x')
		count += ft_putxdm_low(ap);
	if (*str == 'X')
		count += ft_putxdm_upp(ap);
	if (*str == '%')
		count += ft_putprcnt();
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		count;
	int		i;

	i = -1;
	count = 0;
	va_start(ap, str);
	while (str[++i])
	{
		if (str[i] == '%')
		{
			i++;
			count += ft_prcnt((str + i), ap);
		}
		else
			count += write(1, str + i, 1);
	}
	va_end(ap);
	return (count);
}
