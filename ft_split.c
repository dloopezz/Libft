/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopezz <lopezz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 15:51:17 by dlopez-s          #+#    #+#             */
/*   Updated: 2022/09/25 18:02:09 by lopezz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//1. hacer contador de palabras
//2. funcion para escribir cada palabra nueva (con malloc)
//3. split

static int	ft_cont(const char *str, char c)
{
	int	i;
	int	n_words;
	int	flag;

	i = 0;
	n_words = 0;
	flag = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && flag == 0)
		{
			flag = 1;
			n_words++;
		}
		else if (str[i] == c)
			flag = 0;
		i++;
	}
	return (n_words);
}

static char	*ft_words(const char *s, int inicio, int final)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = malloc((final - inicio + 1) * sizeof (char));
	while (inicio < final)
	{
		ptr[i] = s[inicio];
		i++;
		inicio++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	**ft_split(const char *s, char c)
{
	char	**words;
	size_t	i;
	size_t	j;
	int		flag;

	words = malloc((ft_cont(s, c) + 1) * sizeof (char *));
	if (!words || !s)
		return (0);
	i = 0;
	j = 0;
	flag = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && flag < 0)
			flag = i;
		else if ((s[i] == c || i == ft_strlen(s)) && flag >= 0)
		{
			words[j] = ft_words(s, flag, i);
			j++;
			flag = -1;
		}
		i++;
	}
	words[j] = NULL;
	return (words);
}

/* 
#include <stdio.h>

int	main(void)
{
	char	**tab;
	unsigned int	i;

	i = 0;
	tab = ft_split("viva er beti", ' ');
	if (!tab[0])
		ft_putendl_fd("ok\n", 1);
	while (tab[i] != NULL)
	{
		ft_putendl_fd(tab[i], 1);
		i++;
	}
} 
*/