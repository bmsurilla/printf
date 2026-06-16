/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bea_s <bea_s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 01:21:06 by bea_s             #+#    #+#             */
/*   Updated: 2026/06/17 01:28:39 by bea_s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int		ft_format(char formatter, va_list format)
{	
	int	i;
	
	i = 0;
	if (formatter == "c")
		ft_putchar(va_arg(format, char));
	// else if (str[i] == "s")
	// 	str[i] = ft_putstr(va_arg(format, char*));
	else if (formatter == "p")
		i = i + ft_putptr(va_arg(format, void*));
	else if (formatter == "d" || formatter == "i")
		i = i + ft_putnbr (va_arg(format, int));
	else if (formatter == "u")
		i = i + ft_putnbr_u(va_arg(format, unsigned int))
	else if (formatter == "x")
		i = i + ft_putnbr_hex(va_arg(format, unsigned long), HEX_LOWER);
	else if (formatter == "X")
		i = i + ft_putnbr_hex(va_arg(format, unsigned long), HEX_UPPER);
	else (formatter) == "%")
		i = i + ft_putchar(%);
	return (i);
	}
}

int		ft_printf(const char *str, ...)
{
	va_start	(format, *str);
	int			i;
	
	i = 0;
	while (str[i])
	{
		if (str[i] = "%")
		{
			i++;
			ft_format(str[i], format);
		}
		else
			ft_putstr(*str);
			i++;		
	}
	return (i);
}
