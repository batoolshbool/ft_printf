/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basic_specifiers.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshbool <bshbool@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 18:39:04 by bshbool           #+#    #+#             */
/*   Updated: 2025/09/09 16:58:38 by bshbool          ###   ########.fr       */
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
		return ;
	}
	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (1);
}

int	ft_print_char(int a)
{
	if (a == '%')
	{
		write(1, "%", 1);
		return (1);
	}
	return (0);
}
