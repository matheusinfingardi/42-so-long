/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minfinga <minfinga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:05:07 by minfinga          #+#    #+#             */
/*   Updated: 2024/05/19 23:18:01 by minfinga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
		{
			return ((char *)s + i);
		}
		i++;
	}
	return (NULL);
}
/*
int main()
{
    const char *str = "Cruzeiro Gigante";
    int search = 'z';
    int not_found = 'b';
    
    printf("Libft z: %s\n", ft_memchr(str, search, 50));
    printf("Libft b: %s\n", ft_memchr(str, not_found, 50));
    
    printf("Original z: %s\n", memchr(str, search, 50));
    printf("Original b: %s\n", memchr(str, not_found, 50));
}
*/