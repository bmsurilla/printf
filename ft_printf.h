/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 00:31:22 by bsurilla          #+#    #+#             */
/*   Updated: 2026/06/03 23:03:08 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# ifndef HEX_LOWER
#  define HEX_LOWER "0123456789abcdef"
# endif

# include <unistd.h>

int		ft_printf(const char *str, ...);
void	ft_putchar(char c);
void	ft_putstr(char *str);
size_t	ft_strlen(const char *str);
size_t	ft_intlen(long long n);
void	ft_putnbr(int n);

#endif
