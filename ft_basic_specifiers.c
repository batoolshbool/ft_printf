/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basic_specifiers.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshbool <bshbool@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 18:39:04 by bshbool           #+#    #+#             */
/*   Updated: 2025/09/10 08:27:29 by bshbool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_print_str(char *s)
{
	int	i;

	if (!s)
	{
		write(1, "(null)", 6);
		return (0);
	}
	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (1);
}

int	ft_print_ptr(void *p)
{
	int	i;

	if (p == 0)
	{
		write(1, "0x0", 3);
		return (3);
	}
	i = 0;
		write(1, "0x", 2);
		i += ft_puthex((unsigned long)p, HEX_LOWER);
	return (i);
}

int	ft_print_unit(unsigned int u)
{
	//function
}
