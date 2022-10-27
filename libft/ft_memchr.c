/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paalvare <paalvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:31:53 by paalvare          #+#    #+#             */
/*   Updated: 2022/10/22 15:22:29 by paalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	ch;
	unsigned char	*s1;
	size_t			i;

	i = 0;
	s1 = (unsigned char *) s;
	ch = (unsigned char )c;
	while (i < n)
	{
		if (*s1 == ch)
			return (s1);
		s1++;
		i++;
	}
	return (NULL);
}
