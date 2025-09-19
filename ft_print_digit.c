/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshbool <bshbool@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 08:32:13 by bshbool           #+#    #+#             */
/*   Updated: 2025/09/15 17:24:15 by bshbool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_digit(int n)
{
	size_t	len;

	len = 0;
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

int	ft_print_digit(int num)
{
	int		i;
	char	str;

	if (num == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	i = ft_digit(num);
	if (num < 0)
	{
		num = num * -1;
		write(1, "-", 1);
	}
	if (num >= 10)
	{
		ft_print_digit(num / 10);
	}
	str = (num % 10) + '0';
	write(1, &str, 1);
	return (i);
}

static size_t	ft_udigit(unsigned int n)
{
	size_t	len;

	len = 1;
	while (n >= 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

int	ft_print_unit(unsigned int num)
{
	int	i;
	int	a;

	i = ft_udigit(num);
	if (num >= 10)
		ft_print_unit(num / 10);
	a = (num % 10) + '0';
	write(1, &a, 1);
	return (i);
}
