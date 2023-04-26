/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paalvare <paalvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 20:20:09 by paalvare          #+#    #+#             */
/*   Updated: 2023/04/26 12:40:29 by paalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

//ft_printf
int		ft_printf(const char *format, ...);
int		ft_formats(va_list args, const char fomat);
int		ft_putchar(int c);
//ft_unsigned
int		ft_num_len(unsigned int num);
char	*ft_uitoa(unsigned int n);
int		ft_print_unsigned(unsigned int n);
//ft_flags
void	ft_putstr(char *str);
int		ft_printstr(char *str);
int		ft_putnbr(int n);
int		ft_percent(void);
//ft_hex
void	ft_putchar_fd(char c, int fd);
void	ft_put_hex(unsigned int num, const char format);
int		ft_print_hex(unsigned int num, const char format);
//ft_itoa
char	*ft_itoa(int n);
//ft_ptr
int		ft_ptr_len(uintptr_t num);
void	ft_put_ptr(uintptr_t num);
int		ft_print_ptr(unsigned long long ptr);

#endif
