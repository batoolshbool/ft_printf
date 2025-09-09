/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshbool <bshbool@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 15:21:35 by bshbool           #+#    #+#             */
/*   Updated: 2025/09/09 16:32:44 by bshbool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_print_hex(unsigned int num)
{
	char *hello = "0123456789abcdef";
	if (num == 0)
	{
		write (1, "0", 1);
		//return (1);
	}
	int i = 0;
	char *str = NULL;
	 while(num)
	 {
		printf("meow\n");
		str[i] = hello[num % 16];
		num /= 16;
		i++;
	}
	while (i > 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	return (1);
	
}
#include <stdio.h>
int main()
{
	ft_print_hex(500);
}

// int	ft_print_ptr(void *ptr)
// {
// 	int	i;

// 	i = 0;
// 	if (ptr == 0)
// 	{
// 		write(1, "(nil)", 5);
// 	}
// }