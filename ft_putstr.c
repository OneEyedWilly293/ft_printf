/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgueon <jgueon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 18:22:26 by jgueon            #+#    #+#             */
/*   Updated: 2025/05/12 18:30:31 by jgueon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** Helper function to write a string to stdout.
** Returns the number of bytes written.
** If the string is NULL, it prints "(null)".
*/
int	ft_putstr(char *str)
{
	int	len;

	len = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[len])
	{
		write(1, &str[len], 1);
		len++;
	}
	return (len);
}
