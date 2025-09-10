/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshbool <bshbool@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 15:21:35 by bshbool           #+#    #+#             */
/*   Updated: 2025/09/10 08:21:58 by bshbool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long num, char *hex_value)
{
	int		i;
	char	*str;
	int		count;

	i = 0;
	str = malloc(sizeof (char) * 17);
	if (!str)
		return (0);
	while (num)
	{
		str[i++] = hex_value[num % 16];
		num /= 16;
	}
	count = 0;
	while (i > 0)
	{
		write(1, &str[--i], 1);
		count ++;
	}
	free (str);
	return (count);
}

int	ft_print_hex(char spec, unsigned int num)
{
	int	i;

	i = 0;
	if (num == 0)
	{
		write (1, "0", 1);
		return (1);
	}
	else if (spec == 'x')
		i += ft_puthex(num, HEX_LOWER);
	else if (spec == 'X')
		i += ft_puthex(num, HEX_UPPER);
	return (i);
}
