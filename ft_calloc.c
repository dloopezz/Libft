/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-s <dlopez-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:28:27 by dlopez-s          #+#    #+#             */
/*   Updated: 2022/09/21 15:52:42 by dlopez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = (int *)malloc(count * size);
	if (p == 0)
		return (NULL);
	else
	{
		ft_bzero(p, count * size);
		return (p);
	}
}

/*
#include <stdio.h>

int main()
{
int *a;
   int i;
   int n;

   n = 4;
   a = (int*)ft_calloc(4, sizeof(int));
   printf("The numbers entered are: ");
   for( i=0 ; i < n ; i++ )
      printf("%d ",a[i]);
   free( a );
   return(0);
}
*/