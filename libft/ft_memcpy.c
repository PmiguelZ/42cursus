/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paalvare <paalvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:22:44 by paalvare          #+#    #+#             */
/*   Updated: 2022/10/25 12:18:16 by paalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;

	s1 = (unsigned char *) src;
	s2 = (unsigned char *) dst;
	i = 0;
	if (dst == src || !n)
		return (dst);
	while (i < n)
	{
		s2[i] = s1[i];
		i++;
	}
	return (dst);
}
