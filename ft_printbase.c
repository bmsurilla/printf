/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printbase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bea_s <bea_s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 19:38:01 by bsurilla          #+#    #+#             */
/*   Updated: 2026/06/08 00:54:16 by bea_s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *n, char *hex)
{
	char		digit;
	int			i;

	i = 2;
	write(1, "0x", 2);
	if (n >= 16)
	{	
		i = i + ft_putnbr_hex(n / 16, hex);
	}	 
	digit = hex[n % 16];
	write(1, &digit, 1);
	i++;
}

#include <stdio.h>
#include <limits.h>
int	main (void)
{
	char *hexbase = HEX_LOWER;
	unsigned int	u;
	u = 26;
	printf(" is your number!\n it has %d digits.\n", ft_putptr(u, hexbase));	
} 