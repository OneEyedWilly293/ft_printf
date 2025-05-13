/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgueon <jgueon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 18:19:10 by jgueon            #+#    #+#             */
/*   Updated: 2025/05/13 14:06:01 by jgueon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** Helper function to write a single character to stdout.
** Returns the number of bytes written (always 1).
*/
int	ft_putchar(char c)
{
	int	ret;

	ret = write(1, &c, 1);
	if (ret == -1)
		return (-1);
	return (1);
}
