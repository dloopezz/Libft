/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopezz <lopezz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 00:34:49 by lopezz            #+#    #+#             */
/*   Updated: 2022/09/23 12:23:35 by lopezz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	cont;

	ptr = (char *)malloc((len + 1) * sizeof(char));
	cont = 0;
	if (ptr == 0)
		return (NULL);
	if (start > ft_strlen((char *)s))
		return (ft_strdup(""));
	while (cont < len && s[start] != '\0')
	{
		ptr[cont] = s[start];
		start++;
		cont++;
	}
	ptr[cont] = '\0';
	return (ptr);
}

/*
#include <stdio.h>

int main()
{
	char str[] = "lorem ipsum dolor sit amet";
	printf("%s", ft_substr(str, 400, 20));
}
*/