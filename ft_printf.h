/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bea_s <bea_s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 00:31:22 by bsurilla          #+#    #+#             */
/*   Updated: 2026/06/06 08:12:33 by bea_s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# ifndef HEX_LOWER
#  define HEX_LOWER "0123456789abcdef"
# endif

# include <unistd.h>

int		ft_printf(const char *str, ...);
int 	ft_putchar(char c);
int	ft_putstr(char *str);
// size_t	ft_strlen(const char *str);
// size_t	ft_intlen(long long n);
size_t	ft_putnbr(int n);
void    ft_hexconvert(int n);

#endif
