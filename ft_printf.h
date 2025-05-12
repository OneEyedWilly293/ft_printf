/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgueon <jgueon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 17:59:10 by jgueon            #+#    #+#             */
/*   Updated: 2025/05/12 18:30:23 by jgueon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>

int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr(int n);
int		ft_putnbr_unsigned(unsigned int n);
int		ft_puthex(unsigned long n, int uppercase);
int		ft_putptr(void *ptr);
int		ft_process_format(char specifier, va_list args);
int		ft_printf(const char *format, ...);


#endif