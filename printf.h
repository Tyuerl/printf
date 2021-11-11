/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glavette <glavette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 12:25:13 by glavette          #+#    #+#             */
/*   Updated: 2021/11/11 19:45:18 by glavette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
void	ft_putchar1(char c);
int		ft_putxdm_low(va_list ap);
void	ft_itoa_base(char *base, unsigned int n);
int		ft_putxdm_upp(va_list ap);
int		ft_putunbr(va_list ap);
int		ft_putstr(va_list ap);
int		ft_putprcnt(va_list ap);
int		ft_putnbr(va_list ap);
int		ft_putchar(va_list ap);
int		ft_prcnt(const char *str, va_list ap);
int		ft_printf(const char *str, ...);
int		ft_cell_code(va_list ap);
#endif