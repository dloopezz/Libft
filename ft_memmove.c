/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopezz <lopezz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:27:41 by lopezz            #+#    #+#             */
/*   Updated: 2022/09/23 12:25:37 by lopezz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;

	if (dest == 0 && src == 0)
		return (dest);
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	d = (unsigned char *)dest;
	s = (unsigned const char *)src;
	while (n--)
		d[n] = s[n];
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
	char dest[] = "abc";
	char src[] = "cbe";
	ft_memmove(dest, src, 3);
	printf("%s", dest);
	return (0);
}*/
