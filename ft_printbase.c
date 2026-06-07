/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printbase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bea_s <bea_s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 19:38:01 by bsurilla          #+#    #+#             */
/*   Updated: 2026/06/08 00:17:20 by bea_s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* size_t	ft_intlen(long long n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
} */

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

/* void    ft_hexconvert(int n)
{
    long long    nb;
    char        *hexbase;
    
    nb = n;
    hexbase = HEX_LOWER;
    {
        if(nb >= 16)
            ft_hexconvert(nb / 16);
        write(1, hexbase[nb % 16], 1);
    }
}  */

#include <stdio.h>
#include <limits.h>
int	main (void)
{
	int	n;
	n = INT_MAX;
	printf(" is your number!\n it has %d digits.\n", ft_putnbr(n));	
}