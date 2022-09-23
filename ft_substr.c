/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-s <dlopez-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 00:34:49 by lopezz            #+#    #+#             */
/*   Updated: 2022/09/23 16:25:41 by dlopez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	cont;

	if (s == 0)
		return (NULL);
	if (start > (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	cont = ft_strlen(start + s);
	if (cont < len)
		len = cont;
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (ptr == 0)
		return (NULL);
	ft_strlcpy(ptr, s + start, len + 1);
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