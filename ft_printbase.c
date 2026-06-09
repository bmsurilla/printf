/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printbase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 19:38:01 by bsurilla          #+#    #+#             */
/*   Updated: 2026/06/09 20:53:42 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"



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
 
