/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paalvare <paalvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 12:01:38 by paalvare          #+#    #+#             */
/*   Updated: 2023/04/24 12:17:04 by paalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_absval(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}

static int	ft_nbrlen(long n)
{
	int	size;

	size = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
		size++;
	while (n)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		size;

	size = ft_nbrlen(n);
	str = (char *)malloc(sizeof(char) * size + 1);
	if (!str)
		return (NULL);
	str[size] = '\0';
	if (n < 0)
		str[0] = '-';
	if (n == 0)
		str[0] = '0';
	while (n)
	{
		--size;
		str[size] = ft_absval(n % 10) + '0';
		n /= 10;
	}
	return (str);
}
