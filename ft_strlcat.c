/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-s <dlopez-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:56:25 by dlopez-s          #+#    #+#             */
/*   Updated: 2022/09/15 17:55:20 by dlopez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dsize)
{
	size_t	d;
	size_t	s;

	d = 0;
	s = 0;
	if (dsize == 0 || ft_strlen(dest) < dsize)
		return ((ft_strlen((char *) src)) + (dsize - 1));
	while (src[s] != '\0' && s > dsize - ft_strlen(dest) - 1)
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	//return ((ft_strlen((char *) src)) + (dsize - 1));
	if (dsize <= ft_strlen(dest))
		return ((ft_strlen((char *) src) + dsize));
	else
		return ((ft_strlen((char *) src) + ft_strlen(dest)));
	
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
	char dest[] = "1*";
	char src[] = "Wo";
	printf("Size: %zu\n", ft_strlcat(dest, src, sizeof(dest)));
	printf("Dest: %s\n", dest);
	printf("Src: %s", src);
}
*/