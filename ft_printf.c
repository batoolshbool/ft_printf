/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshbool <bshbool@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 16:28:56 by bshbool           #+#    #+#             */
/*   Updated: 2025/09/15 15:49:56 by bshbool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_valid_specs(char c)
{
	return (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' || c == 'u'
		|| c == 'x' || c == 'X' || c == '%');
}

static int	ft_specifiers(char spec, va_list arg)
{
	int	len;

	len = 0;
	if (spec == 'c')
		len += ft_print_char(va_arg(arg, int));
	else if (spec == 's')
		len += ft_print_str(va_arg(arg, char *));
	else if (spec == 'p')
		len += ft_print_ptr(va_arg(arg, void *));
	else if (spec == 'i' || spec == 'd')
		len += ft_print_digit(va_arg(arg, int));
	else if (spec == 'u')
		len += ft_print_unit(va_arg(arg, unsigned int));
	else if (spec == 'X' || spec == 'x')
		len += ft_print_hex(spec, va_arg(arg, unsigned int));
	else if (spec == '%')
	{
		write(1, "%", 1);
		len += 1;
	}
	else
		return (0);
	return (len);
}

static int	ft_print_specs(const char *format, va_list arg)
{
	int	len;
	int	i;

	i = 0;
	len = 0;
	if (format[i] && ft_valid_specs(format[i]))
	{
		len += ft_specifiers(format[i], arg);
		i++;
	}
	else if (format[i])
	{
		return (-1);
	}
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
	if (!format)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			len += ft_print_specs(&format[i + 1], arg);
			i += 2;
		}
		else if (format[i] != '%')
		{
			len += write(1, &format[i], 1);
			i++;
		}
	}
	va_end(arg);
	return (len);
}
