/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printbase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 19:38:01 by bsurilla          #+#    #+#             */
/*   Updated: 2026/06/08 22:21:25 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

#include <stdio.h>
#include <limits.h>
int	main (void)
{
	int	result;
	char *ptr = "hello";
	
	printf(" is your address!\n it has %d digits.\n", ft_putptr(ptr));
	
	result = printf("%p", ptr);
	printf(" it has %d digits.\n", result);
} 
 