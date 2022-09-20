/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopezz <lopezz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:14:17 by lopezz            #+#    #+#             */
/*   Updated: 2022/09/20 13:36:02 by lopezz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *p;
    size_t len1;
    size_t len2;
    size_t i;

    len1 = ft_strlen((char *)s1) + 1;
    len2 = ft_strlen((char *)s2) + 1;
    i = 0;
    p = (char *)malloc((len1 + len2) * sizeof(char));
    while (i < len2)
    {
        p[i] = s2[i];
        i++;
        len1++;
    }
    return (p);
}


#include <stdio.h>

int main()
{
	char str1[] = "hola que tal";
	char str2[] = "como te llamas";

    printf("%s", ft_strjoin(str1, str2));
    return (0);
}