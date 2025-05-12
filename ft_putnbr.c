/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgueon <jgueon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 18:20:55 by jgueon            #+#    #+#             */
/*   Updated: 2025/05/12 18:30:45 by jgueon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** Helper function to write a number in decimal (signed).
** Handles negative numbers and INT_MIN.
** Returns the number of characters printed.
*/
int	ft_putnbr(int n)
{
	int		count;
	char	c;

	count = 0;
	if (n == INT_MIN)
	{
		count += ft_putstr("-2147483648");
		return (count);
	}
	if (n < 0)
	{
		count += ft_putchar('-');
		n = -n;
	}
	if (n > 9)
		count += ft_putnbr(n / 10);
	c = (n % 10) + '0';
	count += ft_putchar(c);
	return (count);
}
