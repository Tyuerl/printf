/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glavette <glavette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:01:05 by glavette          #+#    #+#             */
/*   Updated: 2021/12/26 22:18:48 by glavette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/printf.h"

int	ft_strlen(const char *s)
{
	int			count;
	const char	*string;

	string = s;
	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

int	ft_putstr(va_list ap)
{
	char	*a;

	a = va_arg(ap, char *);
	if (a == NULL)
		return (write(1, "(null)", 6));
	return (write (1, a, ft_strlen(a)));
}

int	ft_putchar(va_list ap)
{
	char	a;

	a = va_arg(ap, int);
	write (1, &a, 1);
	return (1);
}

int	ft_putcharint(int ap)
{
	char	a;

	a = ap;
	return (write (1, &a, 1));
}
