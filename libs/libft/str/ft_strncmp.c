/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minfinga <minfinga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:55:31 by minfinga          #+#    #+#             */
/*   Updated: 2024/05/22 19:04:23 by minfinga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
	{
		return (0);
	}
	while (*s1 && *s1 == *s2 && n > 1)
	{
		s1++;
		s2++;
		n--;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
/*
int main()
{
    char	*str1 = "Cruzeiro ";
	char	*str2 = "Cruzeiro";
    
    printf("Libft: %d\n", ft_strncmp(str1, str2, 50));
	printf("Original: %d\n", strncmp(str1, str2, 50));
}
*/