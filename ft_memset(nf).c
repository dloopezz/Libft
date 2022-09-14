/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-s <dlopez-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 13:43:12 by dlopez-s          #+#    #+#             */
/*   Updated: 2022/09/13 15:10:12 by dlopez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memset(void *b, int c, int len) //size_t len
{
		
}



#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "Hola que tal";
	
	memset(str + 5, '.', 3);
	printf("%s", str);
	return (0);
}

/*#include <string.h>

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	*string;

	string = (unsigned char*)str;
	while (len-- > 0)
		*(string++) = (unsigned char)c;
	return (str);
}
*/