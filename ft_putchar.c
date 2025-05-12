/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgueon <jgueon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 18:19:10 by jgueon            #+#    #+#             */
/*   Updated: 2025/05/12 18:35:23 by jgueon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** Helper function to write a single character to stdout.
** Returns the number of bytes written (always 1).
*/
int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
