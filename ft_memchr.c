/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-s <dlopez-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:17:12 by dlopez-s          #+#    #+#             */
/*   Updated: 2022/09/16 17:07:46 by dlopez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t  i;

	i = 0;
	while (i <= n)
	{
		if ((unsigned char)&s[i] == c)
			return ((unsigned char *)&s[i]);
		i++;
	}
	if (c == '\0')
		return ((unsigned char*)&s[i]);
	return (NULL);
}

#include <stdio.h>
#include <string.h>

int main()
{
	printf("%s", ft_memchr("Holaaa", 'l', 5));
	return (0);
}
