/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgueon <jgueon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 18:21:36 by jgueon            #+#    #+#             */
/*   Updated: 2025/05/13 14:08:25 by jgueon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** Helper function to print a pointer address in hexadecimal format.
** Prints "0x" prefix followed by the address.
** Returns the number of characters printed.
*/
int	ft_putptr(void *ptr)
{
	int				count;
	unsigned long	addr;

	count = 0;
	addr = (unsigned long)ptr;
	if (addr == 0)
	{
		count += ft_putstr("(nil)");
		return (count);
	}
	count += ft_putstr("0x");
	count += ft_puthex(addr, 0);
	return (count);
}
