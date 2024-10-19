/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minfinga <minfinga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 22:07:59 by minfinga          #+#    #+#             */
/*   Updated: 2024/05/22 19:03:53 by minfinga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (*s == (char)c)
	{
		return ((char *)s);
	}
	return (NULL);
}
/*
int main()
{
    const char *str = "Cruzeiro Gigante";
    int search = 'z';
    int not_found = 'b';
    
    printf("Libft z: %s\n", ft_strchr(str, search));
    printf("Libft b: %s\n", ft_strchr(str, not_found));
    
    printf("Original z: %s\n", strchr(str, search));
    printf("Original b: %s\n", strchr(str, not_found));
}
*/