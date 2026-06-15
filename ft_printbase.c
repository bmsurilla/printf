/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printbase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 19:38:01 by bsurilla          #+#    #+#             */
/*   Updated: 2026/06/15 20:49:31 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include "ft_printf.h"



#include <stdio.h>
#include <limits.h>
int	main (void)
{
	int	result;
	char *ptr = "hello";
	
	printf(" is your address!\n it has %d digits.\n", ft_putptr(ptr));
	
	result = printf("%p", ptr);
	printf(" it has %d digits.\n", result);
}  */
 
/* int		ft_printf(const char *str, ...)
{
	va_list	format;
	int		i;
	
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
				ft_putchar(str[i]);
				return (i + ft_putchar(*str));
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
} */