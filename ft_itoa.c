/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopezz <lopezz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 21:41:57 by lopezz            #+#    #+#             */
/*   Updated: 2022/09/21 22:48:08 by lopezz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_cont(int n)
{
	int i;
	i = 0;
	
	if (n < 0)
		n *= -1;
	while (n >= 1)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char *ft_itoa(int n)
{
	char *str;
	unsigned int len;
	
	len = ft_cont(n) + 1;
	str = (char *)malloc(len * sizeof(char));
	str[len] = '\0';
	while (n > 0)
	{
		str[len--] = n%10 + 48;
		n = n / 10;
	}


	return (str);
}

#include <stdio.h>

int main()
{
	int n = 12;
	printf("%d\n", ft_cont(n));
	printf("%s", ft_itoa(n));
}