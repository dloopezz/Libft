/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-s <dlopez-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 20:01:45 by lopezz            #+#    #+#             */
/*   Updated: 2022/09/19 16:01:02 by dlopez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	size_t			diff;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	diff = 0;
	while ((str1[i] != '\0') && (str2[i] != '\0') && (i < n) && (diff == 0))
	{
		diff = str1[i] - str2[i];
		i ++;
	}
	if (i < n && (diff == 0) && ((str1[i] != '\0') || (str2[i] != '\0')))
	{
		diff = str1[i] - str2[i];
	}
	return (diff);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
	printf("%d", ft_memcmp("b", "a", 6));
	return (0);
}
*/