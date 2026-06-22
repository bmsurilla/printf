/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bea_s <bea_s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 01:21:06 by bea_s             #+#    #+#             */
/*   Updated: 2026/06/22 20:32:30 by bea_s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		write (1, "(null)", 6);
		return(6);
	}
	while (str[i])
	{
			write (1, &str[i], 1);
			i++;
	}
	return (i);
}

int	ft_format(char formatter, va_list format)
{
	int	i;

	i = 0;
	if (formatter == 'c')
		i = i + ft_putchar(va_arg(format, int));
	else if (formatter == 's')
		i = i + ft_putstr(va_arg(format, char *));
	else if (formatter == 'p')
		i = i + ft_putptr(va_arg(format, void *));
	else if (formatter == 'd' || formatter == 'i')
		i = i + ft_putnbr(va_arg(format, int));
	else if (formatter == 'u')
		i = i + ft_putnbr_u(va_arg(format, unsigned int));
	else if (formatter == 'x')
		i = i + ft_putnbr_hex(va_arg(format, unsigned int), HEX_LOWER);
	else if (formatter == 'X')
		i = i + ft_putnbr_hex(va_arg(format, unsigned int), HEX_UPPER);
	else if (formatter == '%')
		i = i + ft_putchar('%');
	return (i);
}

int	ft_printf(const char *str, ...)
{
	va_list		format;
	int			i;
	int			count;

	i = 0;
	count = 0;
	va_start (format, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			count = count + ft_format(str[i], format);
		}
		else
		{
			ft_putchar(str[i]);
			count++;
		}
		i++;
	}
	va_end(format);
	return (count);
}
/* #include <stdio.h>
int	main (void)
{
ft_printf("Hello \n");
ft_printf("%d \n", 42);
ft_printf("A%dB \n", 42);
ft_printf("%s %d \n", "Bea", 42);
ft_printf("%% \n");
ft_printf("%c\n", 'B');
ft_printf("\n");
printf("\n");
ft_printf("\n");
printf("\n");
printf("Hello \n");
printf("%d \n", 42);
printf("A%dB \n", 42);
printf("%s %d \n", "Bea", 42);
printf("%% \n");
printf("%c\n", 'B');
}
 */
/* #include <stdio.h>
int	main (void)
{
printf(" NULL %s NULL ", NULL);
ft_printf(" NULL %s NULL ", NULL);
} */

/* #include <stdio.h>
#include <limits.h>
int main (void)
{
	ft_printf(" %X \n", LONG_MAX);
	ft_printf(" %X \n", LONG_MIN);
	ft_printf(" %X \n", ULONG_MAX);
	ft_printf(" %X \n", 9223372036854775807LL);
	ft_printf(" %X %X %X %X %X %X %X \n", INT_MAX, INT_MIN, LONG_MAX, 
LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %X \n", LONG_MAX);
	printf(" %X \n", LONG_MIN);
	printf(" %X \n", ULONG_MAX);
	printf(" %X \n", 9223372036854775807LL);
	printf(" %X %X %X %X %X %X %X \n", INT_MAX, INT_MIN, LONG_MAX, 
LONG_MIN, ULONG_MAX, 0, -42);
} */


/* #include <stdio.h>
#include <limits.h>
int main (void)
{
printf(" %p %p ", LONG_MIN, LONG_MAX);
printf(" %p %p ", ULONG_MAX, -ULONG_MAX);
printf("\n");
// ft_printf(" %p %p ", LONG_MIN, LONG_MAX);
// ft_printf(" %p %p ", ULONG_MAX, -ULONG_MAX);
// printf("\n");
// printf("%p\n", NULL);
// ft_printf("%p\n", NULL);
// printf("\n");
// printf("%p\n", LONG_MAX);
// printf("%p\n", (void *)LONG_MAX);
} */