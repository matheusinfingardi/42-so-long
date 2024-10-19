/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minfinga <minfinga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 19:32:09 by minfinga          #+#    #+#             */
/*   Updated: 2024/05/22 19:04:42 by minfinga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
int main(void)
{
    char    str[10] = "1234567890";
    char    str1[10] = "1234567890";

    printf("Libft antes: %s\n", str);
    ft_bzero(str, 5);
    printf("Libft depois: %s\n", str);
    printf("Original antes: %s\n", str1);
    bzero(str1, 5);
    printf("Original depois: %s\n", str1); 
}
*/