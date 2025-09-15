/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshbool <bshbool@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 16:23:45 by bshbool           #+#    #+#             */
/*   Updated: 2025/09/15 13:46:46 by bshbool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
//# include "libft/libft.h"

# define HEX_LOWER "0123456789abcdef"
# define HEX_UPPER "0123456789ABCDEF"

int	ft_printf(const char *format, ...);
int	ft_print_hex(char spec, unsigned int num);
int	ft_puthex(unsigned long num, char *hex_value);
int	ft_print_char(int c);
int	ft_print_str(char *s);
int	ft_print_ptr(void *p);
int	ft_print_digit(int num);
int	ft_print_unit(unsigned int num);

#endif