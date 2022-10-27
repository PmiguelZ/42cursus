/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paalvare <paalvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:40:11 by paalvare          #+#    #+#             */
/*   Updated: 2022/10/22 17:49:07 by paalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *) b;
	while (len--)
		str[i++] = (unsigned char)c;
	return (b);
}
/*
int main (void)
{
	char b[] = "buenos dias";
	int c = 'o';
	size_t len = 3;

printf("%s\n", ft_memset(b, c, len));
printf("%s\n", memset(b, c, len));
}*/
