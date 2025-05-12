/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_format.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgueon <jgueon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 18:18:30 by jgueon            #+#    #+#             */
/*   Updated: 2025/05/12 18:31:08 by jgueon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** Processes a single format specifier and prints the corresponding argument.
** Returns the number of characters printed.
*/
int	ft_process_format(char specifier, va_list args)
{
	if (specifier == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (specifier == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (specifier == 'p')
		return (ft_putptr(va_arg(args, void *)));
	if (specifier == 'd' || specifier == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (specifier == 'u')
		return (ft_putnbr_unsigned(va_arg(args, unsigned int)));
	if (specifier == 'x')
		return (ft_puthex(va_arg(args, unsigned int), 0));
	if (specifier == 'X')
		return (ft_puthex(va_arg(args, unsigned int), 1));
	if (specifier == '%')
		return (ft_putchar('%'));
	return (0);
}
