/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshbool <bshbool@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 16:28:56 by bshbool           #+#    #+#             */
/*   Updated: 2025/09/07 10:20:57 by bshbool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_specifiers(const char *str, va_list str)
{
	int	len;
	
	len = 0;
	if (str == 'c')
		len += ft_print_char(str);
	else if (str == 's')
		len += ft_print_str(str);
	else if (str == 'p')
		//len += function(pointer);
	else if (str == 'i' || str == 'd')
		//len += function(base 10 number/ itoa->putstr);
	else if (str == 'u')
		//len += function(unsigned/ utoa->putstr);
	else if (str == 'X' || str == 'x')
		//len += function (base 16 number);
	else if (str == '%')
		//len += function;
	else
		return (0);
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int	len;
	int	i;
	char *str;

	str = ft_strdup(format);
	if (!str)
		return (0);
	va_start(arg, str);
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += ft_specifiers(format, str[i + 1]);
			i++;
		}
		else
			len += write(1, &str[i], 1);
		i++;
	}
	va_end(arg);
	return (len);
}
