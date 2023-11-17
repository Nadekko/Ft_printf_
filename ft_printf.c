/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <andjenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:21:10 by andjenna          #+#    #+#             */
/*   Updated: 2023/11/17 17:23:03 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_parse(char c, va_list args)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_printf_char(args);
	else if (c == 's')
		count += ft_printf_str(args);
	else if (c == 'u')
		count += ft_printf_unsign(args);
	else if (c == 'x' || c == 'X')
		count += ft_printf_hexa(args, c);
	else if (c == 'p')
		count += ft_printf_ptr(args, c);
	else if (c == 'd' || c == 'i')
		count += ft_printf_int(args);
	else if (c == '%')
		return ((int)write(1, "%", 1));
	else
		count = -1;
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	if (format == NULL)
		return (-1);
	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
			count += write(1, &*format, 1);
		else if (*format == '%')
		{
			count += ft_parse(*(format + 1), args);
			format++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
