/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paalvare <paalvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 20:01:07 by paalvare          #+#    #+#             */
/*   Updated: 2023/04/18 12:58:42 by paalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putchar(int c){
	write(1, &c, 1);
	return (1);
}
int ft_putstr(int  *str){
	int len = 0;
	while (str[len]){
		ft_putchar(str[len]);
		len++;
	}
	return (len);
}

int fr_formats(va_list args, const char *format){
	if(*format == 'c'){
		ft_putchar(va_arg(args, int));
		retunr(1);
	}
	if(*format  == 's') {
		return (ft_putstr(va_arg(args, char *)));
	}
	return (0);
}

int	ft_printf(const char *format, ...){
	va_list args;
	int len = 0;
	va_start(args, format);
	while (*format){
		if (*format == '%'){
			format++;
			len +=  ft_formats(args,format)
		}else {
			ft_putchar(*format);
			len++;
		}
		format++;
	}
	va_end(args);
	return(len);
}
