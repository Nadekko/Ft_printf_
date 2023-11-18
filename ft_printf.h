/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadekko <nadekko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:58:27 by andjenna          #+#    #+#             */
/*   Updated: 2023/11/18 00:19:22 by nadekko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdint.h>

/*              FONCTION            */

int	ft_printf(const char *fromat, ...);
int	ft_printf_char(va_list args);
int	ft_printf_str(va_list args);
int	ft_printf_hexa(va_list args, char flag);
int	ft_printf_ptr(va_list args, char flag);
int	ft_printf_int(va_list args);

unsigned int	ft_printf_unsign(va_list args);

/*               UTILS               */
void	ft_putnbr_unsigned(unsigned int nb);
void	ft_putnbr_hexa(unsigned long long nb, char flag);
void	ft_putnbr(int n);
int	ft_digit_count_hexa(unsigned long long n, int base);
int	ft_digit_count(int n);
void	ft_putchar(char c);

#endif
