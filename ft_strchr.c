/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopezz <lopezz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 21:01:46 by lopezz            #+#    #+#             */
/*   Updated: 2022/09/15 21:26:36 by lopezz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    size_t  i;

    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
			return ((char*)&s[i]);
        i++;
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
    printf("%s", ft_strchr("Holaaa", 'z'));
    return (0);
}
*/