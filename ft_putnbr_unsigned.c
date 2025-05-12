/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgueon <jgueon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 18:20:32 by jgueon            #+#    #+#             */
/*   Updated: 2025/05/12 18:30:54 by jgueon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** Helper function to write an unsigned number in decimal.
** Returns the number of characters printed.
*/
int	ft_putnbr_unsigned(unsigned int n)
{
	int		count;
	char	c;

	count = 0;
	if (n > 9)
		count += ft_putnbr_unsigned(n / 10);
	c = (n % 10) + '0';
	count += ft_putchar(c);
	return (count);
}
