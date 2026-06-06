/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printbase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bea_s <bea_s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 19:38:01 by bsurilla          #+#    #+#             */
/*   Updated: 2026/06/06 07:49:54 by bea_s            ###   ########.fr       */
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

size_t	ft_putnbr(int n)
{
	long long	nb;
	char		digit;
	int			i;

	nb = n;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb *(-1);
		i++;
	}
	if (nb >= 10)
	{	
	ft_putnbr(nb / 10);
	i++;
	}	
	digit = nb % 10 + '0';
	write(1, &digit, ft_intlen(nb));
	return (i);
}

void    ft_hexconvert(int n)
{
    long long    nb;
    char        *hexbase;
    
    nb = n;
    hexbase = "0123456789abcdef";
    {
        if(nb >= 16)
            ft_hexconvert(nb / 16);
        write(1, hexbase[nb % 16], 1);
    }
}