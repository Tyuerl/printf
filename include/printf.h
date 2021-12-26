/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glavette <glavette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 03:03:48 by glavette          #+#    #+#             */
/*   Updated: 2021/12/26 21:34:42 by glavette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_len_num(unsigned long long n);
int		ft_len_num16(unsigned long long n);
int		ft_cell_code(va_list ap);
int		ft_prcnt(const char *str, va_list ap);
int		ft_printf(const char *str, ...);
int		ft_putnbr(va_list ap);
int		ft_putunbr(va_list ap);
int		ft_putprcnt(void);
void	ft_itoa_base(char *base, unsigned int n);
int		ft_putxdm_low(va_list ap);
int		ft_putxdm_upp(va_list ap);
int		ft_putchar(va_list ap);
int		ft_putcharint(int ap);
int		ft_strlen(const char *s);
int		ft_putstr(va_list ap);
#endif	