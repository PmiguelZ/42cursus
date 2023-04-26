/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paalvare <paalvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 04:08:41 by paalvare          #+#    #+#             */
/*   Updated: 2023/04/26 13:26:53 by paalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_len(unsigned	int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len ++;
		num = num / 16;
	}
	return (len);
}

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_put_hex(unsigned int num, const char format)
{
	if (num >= 16)
	{
		ft_put_hex(num / 16, format);
		num %= 16;
	}	
	if (num <= 9)
	{
		ft_putchar_fd(num + '0', 1);
	}
	else
	{
		if (format == 'x')
		{
			ft_putchar_fd(num - 10 + 'a', 1);
		}
		else
		{
			ft_putchar_fd(num - 10 + 'A', 1);
		}
	}
}

int	ft_print_hex(unsigned int num, const char format)
{
	int	len;

	len = 1;
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_put_hex(num, format);
	return (ft_hex_len(num));
}
