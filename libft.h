/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopezz <lopezz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:07:30 by dlopez-s          #+#    #+#             */
/*   Updated: 2022/09/14 14:28:24 by lopezz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LIBFT_H_
#define _LIBFT_H_

#include <stdlib.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
size_t	ft_strlen(char *str);
void *ft_memset(void *b, int c, size_t len);
void    ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t n);



#endif