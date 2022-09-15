/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-s <dlopez-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:42:35 by dlopez-s          #+#    #+#             */
/*   Updated: 2022/09/14 17:52:56 by dlopez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

/*
#include <stdio.h>
#include <ctype.h>

int main()
{
	char c = '!';
	
	if (ft_isalnum(c) != '\0')
		printf("%d", ft_isalnum(c));
	else
		printf("%d", ft_isalnum(c));
	return 0;
}

*/