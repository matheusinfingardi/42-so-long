/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minfinga <minfinga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 21:27:34 by minfinga          #+#    #+#             */
/*   Updated: 2024/05/19 21:37:57 by minfinga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	int	len;

	len = 0;
	if (size == 0)
	{
		return (ft_strlen(src));
	}
	while (size > 1 && *src)
	{
		*dest++ = *src++;
		size--;
		len++;
	}
	*dest = '\0';
	while (*src)
	{
		src++;
		len++;
	}
	return (len);
}
/*
int main()
{
    char    src[] = "Cruzeiro Cabeludo";
    char  dest[10];
	char  dest1[10];
    
    size_t len;
    
    len = ft_strlcpy(dest, src, sizeof(dest));
	
    printf("String copiada: %s\n", dest);
    printf("Comprimento da string copiada: %zu\n", len);
    return(0);
}
*/
