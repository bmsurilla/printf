/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_helpers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 00:41:19 by bsurilla          #+#    #+#             */
/*   Updated: 2026/06/09 21:16:55 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putnbr(int n)
{
	long long	nb;
	char		digit;
	int			i;

	nb = n;
	i = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb *(-1);
		i++;
	}
	if (nb >= 10)
	{
		i = i + ft_putnbr(nb / 10);
	}
	digit = nb % 10 + '0';
	write(1, &digit, 1);
	i++;
	return (i);
}

int	ft_putnbr_u(unsigned int n)
{
	char		digit;
	int			i;

	i = 0;
	if (n >= 10)
	{
		i = i + ft_putnbr_u(n / 10);
	}
	digit = n % 10 + '0';
	write(1, &digit, 1);
	i++;
	return (i);
}

int	ft_putnbr_hex(unsigned long n, char *hex)
{
	char		digit;
	int			i;

	i = 0;
	if (n >= 16)
	{
		i = i + ft_putnbr_hex(n / 16, hex);
	}
	digit = hex[n % 16];
	write(1, &digit, 1);
	i++;
	return (i);
}

int	ft_putptr(void *ptr)
{
	unsigned long	n;
	int 			hex;
	
	if(!ptr)
	{
		write (1, "(nil)", 5);
		return (5);
	}
	n = (unsigned long)ptr;
	write(1, "0x", 2);
	hex = ft_putnbr_hex(n, HEX_LOWER);
	return (hex + 2);
}
/* 
 #include <stdio.h>
 #include <limits.h>
 int main (void)
 {
	char str[] = "hello, ";
	char c = 'b';
	char *hexbase = HEX_LOWER;
	int	n;
	unsigned int	u;
	n = -26;
	u = 255;
	
	printf("\n result putstr: %d\n", ft_putstr(str));
	printf("\n result putchar: %d\n", ft_putchar(c));
	printf(" is your number!\n it has %d digits.\n", ft_putnbr(n));	
	printf(" is your number!\n it has %d digits.\n", ft_putnbr_u(u));
	printf(" is your number!\n it has %d digits.\n", ft_putnbr_hex(u,hexbase));	
} */