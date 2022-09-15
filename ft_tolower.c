/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopezz <lopezz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 20:56:39 by lopezz            #+#    #+#             */
/*   Updated: 2022/09/15 20:57:10 by lopezz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_tolower(int c)
{
    if ('A' <= c && c <= 'Z')
        c += 32;
    return (c);
}

/*
#include <stdio.h>
#include <ctype.h>

int main()
{
    printf("%d", ft_tolower('B'));
}
*/