/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgueon <jgueon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 18:19:45 by jgueon            #+#    #+#             */
/*   Updated: 2025/05/12 18:30:59 by jgueon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** Helper function to write a number in hexadecimal.
** 'uppercase' flag determines letter case.
** Returns the number of characters printed.
*/
int	ft_puthex(unsigned long n, int uppercase)
{
	int		count;
	char	c;

	count = 0;
	if (n >= 16)
		count += ft_puthex(n / 16, uppercase);
	if (n % 16 < 10)
		c = (n % 16) + '0';
	else
	{
		if (uppercase)
			c = (n % 16) - 10 + 'A';
		else
			c = (n % 16) - 10 + 'a';
	}
	count += ft_putchar(c);
	return (count);
}
