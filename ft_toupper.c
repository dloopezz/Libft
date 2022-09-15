/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopezz <lopezz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 20:38:17 by lopezz            #+#    #+#             */
/*   Updated: 2022/09/15 20:56:11 by lopezz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper(int c)
{
    if ('a' <= c && c <= 'z')
        c -= 32;
    return (c);
}

/*
#include <stdio.h>
#include <ctype.h>

int main()
{
    printf("%d", ft_toupper('b'));
}
*/