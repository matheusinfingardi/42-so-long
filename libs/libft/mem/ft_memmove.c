/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minfinga <minfinga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 19:47:16 by minfinga          #+#    #+#             */
/*   Updated: 2024/05/20 23:37:34 by minfinga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d < s)
	{
		while (n--)
		{
			*d++ = *s++;
		}
	}
	else if (d > s)
	{
		d += n;
		s += n;
		while (n--)
		{
			*--d = *--s;
		}
	}
	return (dest);
}
/*
int main()
{
    char src[] = "Cruzeiro";
    char dest[10];
	char dest1[10];

    ft_memmove(dest, src, sizeof(src));
    printf("Libft: %s\n", dest);
	memmove(dest1, src, sizeof(src));
    printf("Original: %s\n", dest1);
}
*/
