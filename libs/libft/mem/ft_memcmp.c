/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minfinga <minfinga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:10:42 by minfinga          #+#    #+#             */
/*   Updated: 2024/05/19 23:32:18 by minfinga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		}
		i++;
	}
	return (0);
}
/*
int main()
{
    unsigned char   buffer1[] = {"Cruzeiro"};
    unsigned char   buffer2[] = {"Cruzeiro\n"};

    printf("Original: %d\n", memcmp(buffer1, buffer2, 10));
    printf("Libft: %d\n", ft_memcmp(buffer1, buffer2, 10));
}
*/