/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshbool <bshbool@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 16:28:56 by bshbool           #+#    #+#             */
/*   Updated: 2025/09/10 08:29:32 by bshbool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//MAIN IS NOT DELETEDD!!!!
static int	ft_specifiers(char *spec, va_list arg)
{
	int	len;

	len = 0;
	if (spec == 'c')
		len += ft_print_char(va_arg(arg, int));
	else if (spec == 's')
		len += ft_print_str(va_arg(arg, char));
	else if (spec == 'p')
		len += ft_print_ptr(va_arg(arg, void *));
	else if (spec == 'i' || spec == 'd') //NOT DONE
		len += ft_print_digit(va_arg(arg, int)); // itoa->putspec -> base 10;
	else if (spec == 'u') //NOT DONE
		len += ft_print_unit(va_arg(arg, unsigned int)); // (unsigned/ utoa->putspec);
	else if (spec == 'X' || spec == 'x')
		len += ft_print_hex(va_arg(arg, unsigned int), spec);
	else if (spec == '%')
	{
		write(1, "%", 1);
		len += 1;
	}
	else
		return (0);
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		len;
	int		i;

	len = 0;
	va_start(arg, format);
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			len += ft_specifiers(format[i + 1], arg);
			i++;
		}
		else
			len += write(1, &format[i], 1);
		i++;
	}
	va_end(arg);
	return (len);
}
