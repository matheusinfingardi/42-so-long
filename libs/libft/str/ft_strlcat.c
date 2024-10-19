/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minfinga <minfinga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 21:47:22 by minfinga          #+#    #+#             */
/*   Updated: 2024/05/22 19:05:35 by minfinga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[i] && i < size)
	{
		i++;
	}
	while (src[j] && (i + j + 1) < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i < size)
	{
		dest[i + j] = '\0';
	}
	return (i + ft_strlen(src));
}
/*
int main()
{
    char dest[50] = "Cruzeiro";
    const char  src[] = " Cabuloso!";
    
    size_t new_len = ft_strlcat(dest, src, sizeof(dest));
    
    printf("String concatenada: %s\n", dest);
    printf("Comprimento da string concatenada: %zu\n", new_len);
}
*/