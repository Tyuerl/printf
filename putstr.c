/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glavette <glavette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:01:05 by glavette          #+#    #+#             */
/*   Updated: 2021/11/11 19:28:39 by glavette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

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
	return (write (1, a, ft_strlen(a)));
}
