/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopezz <lopezz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:56:25 by dlopez-s          #+#    #+#             */
/*   Updated: 2022/09/15 20:29:21 by lopezz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dsize)
{
    size_t	d;
	size_t	s;
    size_t	i;
	size_t	j;

    j = 0;
    i = ft_strlen(dest);
    s = ft_strlen((char *)src);
    d = i;
    while (src[j] != '\0' && (i < (dsize - 1)) && (dsize != 0))
        {
            dest[i] = src[j];
            i++;
            j++;
        }
    dest[i] = '\0';
    if (dsize <= i)
        return (s + dsize);
    else
        return (s + d);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
	char dest[] = "La";
	char src[] = "Wo";
	printf("Size: %zu\n", ft_strlcat(dest, src, sizeof(dest)));
	printf("Dest: %s\n", dest);
	printf("Src: %s", src);
}
*/