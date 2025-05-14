/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgueon <jgueon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 18:08:36 by jgueon            #+#    #+#             */
/*   Updated: 2025/05/13 18:56:42 by jgueon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** Main ft_printf function.
** Parses the format string and prints arguments accordingly.
** Returns the total number of characters printed.
*/
int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			count += ft_process_format(format[i + 1], &args);
			i += 2;
		}
		else
		{
			count += ft_putchar(format[i]);
			i++;
		}
	}
	va_end(args);
	return (count);
}
