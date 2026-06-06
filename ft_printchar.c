/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bea_s <bea_s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 19:42:00 by bsurilla          #+#    #+#             */
/*   Updated: 2026/06/06 09:32:29 by bea_s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

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

/*  #include <stdio.h>
 int main (void)
 {
	char str[] = "hello, ";
	char c = 'b';
	printf("result putstr: %d\n", ft_putstr(str));
	printf("result putchar: %d\n", ft_putchar(c));
	ft_putstr(str);
	ft_putchar(c);
 } */