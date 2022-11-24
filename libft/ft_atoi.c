/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paalvare <paalvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:34:17 by paalvare          #+#    #+#             */
/*   Updated: 2022/11/24 14:49:43 by paalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	nv;
	int	i;
	int	numi;

	i = 0;
	nv = 0;
	numi = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\v'
		|| *str == '\r' || *str == '\f')
		str++;
	if (*str == '-')
		nv = 1;
	if (*str == '-' || *str == '+')
		str++;
	while (str[i] > 47 && str[i] < 58)
	{
		numi = (str[i] - 48) + (10 * numi);
		i++;
	}
	if (nv == 1)
		numi = numi * -1;
	return (numi);
}
