/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printbase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 19:38:01 by bsurilla          #+#    #+#             */
/*   Updated: 2026/06/03 23:10:15 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_intlen(long long n)
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
}

void	ft_putnbr(int n)
{
	long long	nb;
	char		digit;

	nb = n;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb *(-1);
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	digit = nb % 10 + '0';
	write(1, &digit, ft_intlen(nb));
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