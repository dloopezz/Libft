/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopezz <lopezz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:27:41 by lopezz            #+#    #+#             */
/*   Updated: 2022/09/14 14:31:59 by lopezz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memmove(void *dst, const void *src, size_t len)
{
    unsigned char *d;
    unsigned const char *s;
    size_t i;

    d = (unsigned char*)dst;
    s = (unsigned const char *)src;
    i = 0;
    
    while (i < len)
    {
        d[i] = s[i];
        i++;
    }
    return (dst);
}


#include <stdio.h>
#include <string.h>

int main()
{
    char dst[] = "holaa";
    char src[] = "adios";
    ft_memcpy(dst, src, sizeof(src));
    printf("%s", dst);
    return (0);
}
