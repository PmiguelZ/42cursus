/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paalvare <paalvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:57:53 by paalvare          #+#    #+#             */
/*   Updated: 2022/11/22 12:17:46 by paalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	count;
	size_t	ldst;
	size_t	lsrc;
	size_t	i;

	ldst = ft_strlen(dst);
	lsrc = ft_strlen(src);
	count = ldst;
	i = 0;
	if (dstsize <= ldst)
		return (lsrc + dstsize);
	if (ldst < dstsize -1 && dstsize > 0)
	{
		while (src[i] && ldst + i < dstsize -1)
		{
			dst[count] = src[i];
			count++;
			i++;
		}
		dst[count] = 0;
	}
	if (dstsize <= ldst)
		ldst = dstsize;
	return (lsrc + ldst);
}
