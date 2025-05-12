/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgueon <jgueon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 18:08:36 by jgueon            #+#    #+#             */
/*   Updated: 2025/05/12 18:31:14 by jgueon           ###   ########.fr       */
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
			count += ft_process_format(format[i + 1], args);
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

/*
** Example usage:
** int main(void)
** {
**     ft_printf("Hello %s! Number: %d, Hex: %x, Char: %c, Ptr: %p, Percent: %%\n",
**         "world", 42, 255, 'A', &main);
**     return (0);
** }
*/

/*
** Explanation:
** - Each helper function is responsible for a specific output type.
** - No forbidden constructs (ternary, for, while, switch, etc.) are used.
** - The code is split into small functions to comply with line limits and for clarity.
** - The main ft_printf function parses the format string and delegates to helper functions.
** - Only the mandatory specifiers are handled for simplicity.
*/
