/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paalvare <paalvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 20:01:07 by paalvare          #+#    #+#             */
/*   Updated: 2023/04/26 14:30:31 by paalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_formats(va_list args, const char format)
{
	int	print;

	print = 0;
	if (format == 'c')
		print += ft_putchar (va_arg(args, int));
	else if (format == 's')
		print += (ft_printstr (va_arg(args, char *)));
	else if (format == 'p')
		print += (ft_print_ptr (va_arg(args, unsigned long long)));
	else if (format == 'd' || format == 'i')
		print += (ft_putnbr (va_arg(args, int)));
	else if (format == 'u')
		print += (ft_print_unsigned (va_arg(args, unsigned int)));
	else if (format == 'x' || format == 'X')
		print += (ft_print_hex (va_arg(args, unsigned int), format));
	else if (format == '%')
		print += ft_percent();
	return (print);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;
	int		length;

	len = 0;
	length = 0;
	va_start(args, format);
	while (format[len])
	{
		if (format[len] == '%')
		{
			len++;
			length += ft_formats(args, format[len]);
		}
		else
			length += ft_putchar(format[len]);
		len++;
	}
	va_end(args);
	return (length);
}
