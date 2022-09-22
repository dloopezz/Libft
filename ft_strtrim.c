/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-s <dlopez-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 21:59:01 by lopezz            #+#    #+#             */
/*   Updated: 2022/09/22 15:47:38 by dlopez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_inicio(const char *s1, const char *set)
{
	size_t i;
	size_t len;

	len = ft_strlen(s1);
	i = 0;
	while (i < len)
	{
		if (ft_strchr(set, s1[i]) == 0)
			break;
		i++;
	}
	return (i);
}

int ft_final(const char *s1, const char *set)
{
	size_t i;
	size_t len;

	len = ft_strlen(s1);
	i = 0;
	while (i < len)
	{
		if (ft_strchr(set, s1[len - 1 - i]) == 0)
			break;
		i++;
	}
	return (len - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
    int inicio;
	int final;
	char *str;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	inicio = ft_inicio(s1, set);
	final = ft_final(s1, set);
	if (inicio >= final)
		return(ft_strdup(""));
	str = (char *)malloc((final - inicio + 1) * sizeof(char));
	if (!str)
		return(NULL);
	ft_strlcpy(str, s1 + inicio, final - inicio + 1);
	return (str); 
}

/*
#include <stdio.h>

int main()
{
	char s1[] = "   Hola que tal   ";
	char set[] = "que tal";
	
	printf("%s", ft_strtrim(s1, set));
	return (0);
}
*/