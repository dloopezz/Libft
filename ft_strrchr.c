/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopezz <lopezz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 21:27:16 by lopezz            #+#    #+#             */
/*   Updated: 2022/09/15 21:31:52 by lopezz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    size_t  i;

    i = ft_strlen((char*)&s);
    while (s[i] >= s[0])
    {
        if (s[i] == c)
			return ((char*)&s[i]);
        i--;
    }
    if (c == '\0')
		return ((char*)&s[i]);
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
    printf("%s", ft_strrchr("Holaaa", 'l'));
    return (0);
}
*/