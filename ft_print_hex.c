/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshbool <bshbool@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 15:21:35 by bshbool           #+#    #+#             */
/*   Updated: 2025/09/09 17:24:52 by bshbool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>


int	ft_puthex(unsigned int num, char *hex_value)
{
	int	i;
	char *str;
	int	count;
	
	if (num == 0)
	{
		write (1, "0", 1);
		return (1);
	}
	i = 0;
	str = malloc(sizeof (char));
	while(num)
	{
		str[i] = hex_value[num % 16];
		num /= 16;
		i++;
	}
	count = 0;
	while (i > 0)
	{
		write(1, &str[--i], 1);
		count ++;
	}
	return (count);
	
}
int	ft_print_hex(unsigned int num, char spec)
{
	int	i;

	i = 0;
	if (spec == 'x')
		i += ft_puthex(num, HEX_LOWER);
	else
		i += ft_puthex(num, HEX_UPPER);
	return(i);
}