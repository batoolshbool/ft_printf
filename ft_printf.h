/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshbool <bshbool@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 16:23:45 by bshbool           #+#    #+#             */
/*   Updated: 2025/09/09 17:04:33 by bshbool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

# define HEX_LOWER "0123456789abcdef"
# define HEX_UPPER "0123456789ABCDEF"

int	ft_printf(const char *format, ...);

#endif