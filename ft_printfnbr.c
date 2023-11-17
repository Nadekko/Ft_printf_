/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 12:03:21 by andjenna          #+#    #+#             */
/*   Updated: 2023/11/17 18:42:44 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_hexa(va_list args, char flag)
{
	unsigned int	hexa;

	hexa = va_arg(args, unsigned int);
	ft_putnbr_hexa(hexa, flag);
	return (ft_digit_count_hexa(hexa, 16));
}

int	ft_printf_ptr(va_list args, char flag)
{
	uintptr_t	ptr;

	ptr = va_arg(args, uintptr_t);
	if (ptr == 0)
		return ((int)write(1, "(nil)", 5));
	else
		write(1, "0x", 2);
	ft_putnbr_hexa(ptr, flag);
	return (ft_digit_count_hexa((unsigned long long)ptr, 16) + 2);
}

int	ft_printf_int(va_list args)
{
	int	num;

	num = va_arg(args, int);
	ft_putnbr(num);
	return (ft_digit_count(num));
}

unsigned int	ft_printf_unsign(va_list args)
{
	unsigned int	num;

	num = va_arg(args, unsigned int);
	ft_putnbr_unsigned(num);
	return (ft_digit_count_hexa((unsigned long long)num, 10));
}
