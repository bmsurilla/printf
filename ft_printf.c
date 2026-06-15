/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 01:21:06 by bea_s             #+#    #+#             */
/*   Updated: 2026/06/15 20:58:09 by bsurilla         ###   ########.fr       */
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

int		ft_format(const char *str, va_list format, int i)
{
	va_start (format, str);
	i = 0;
	
	while(str[i])
	{
		if(str[i] == "%")
		{
			i++;
			if (str[i] == "c")
			{
				i++;
				ft_putchar(va_arg(format, char c));
				// return (i + ft_putchar(*str));
			}
			
			
			else if (str[i] == "p")
			{
				i++;
				ft_putptr(*str);
				return (i + ft_putptr(*str));
			}
			else if (str[i] == "d" || str[i] == "i")
			{
				i++;
				ft_putnbr (*str);
				return (i + putnbr (*str));
			}
			else if (str[i] == "u")
			{
				i++;
				ft_putnbr_u(*str)
				return ( i + ft_putnbr_u)
			}
			else if (str[i] == "x")
			{
				i++;
				ft_putnbr_hex(*str, HEX_LOWER);
				return (i + ft_putnbr_hex(*str, HEX_LOWER));
			}
			else if (str[i] == "X")
			{
				i++;
				ft_putnbr_hex(*str, HEX_UPPER);
				return (i + ft_putnbr_hex(*str, HEX_UPPER));
			}
			else if (str[i] == "%")
			{
				i++;
				ft_putchar(%);
				return (i + ft_putchar(%));
			}
			else
			ft_putstr(*str);
			i++;
			return (i);
		}
	}
}
