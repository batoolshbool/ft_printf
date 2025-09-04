/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshbool <bshbool@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 16:28:56 by bshbool           #+#    #+#             */
/*   Updated: 2025/09/04 19:49:49 by bshbool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	function_1(const char *format, va_list str)
{
	int	length_func;
	
	length_func = 0;
	if (str == 'c')
		//length_func += function(putchar);
	else if (str == 's')
		//length_func += function(putstr);
	else if (str == 'p')
		//length_func += function(pointer);
	else if (str == 'i' || str == 'd')
		//length_func += function(base 10 number/ itoa->putstr);
	else if (str == 'u')
		//length_func += function(unsigned/ utoa->putstr);
	else if (str == 'X' || str == 'x')
		//length_func += function (base 16 number);
	else if (str == '%')
		//length_func += function;
	return (length_func);
}

int	printf(const char *format, ...)
{
	va_list	arg;
	int	length;
	int	i;
	
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			//length += function_1 (format, str[i + 1]);
			i++;
		}
		else
			//length += function_2 (str[i]); ----> write function?? (putchar)
		i++;
	}
	va_end(arg);
	return (length);
}