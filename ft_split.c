/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-s <dlopez-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 15:51:17 by dlopez-s          #+#    #+#             */
/*   Updated: 2022/09/23 19:38:10 by dlopez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//1. hacer contador de palabras
//2. funcion para escribir cada palabra nueva (con malloc)
//3. split

static int ft_contw(char *str, char c)
{
	int	i;
	int n_words;

	i = 0;
	n_words = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			n_words++;
		i++;
	}
	n_words++;
	return (n_words);
}

/* char	**ft_split(char const *s, char c)
{
	
} */

#include <stdio.h>

int main()
{
	char str[] = "viva er beti";
	printf("%d", ft_contw(str, 'a'));
}