/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minfinga <minfinga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 19:36:25 by minfinga          #+#    #+#             */
/*   Updated: 2024/05/19 20:46:15 by minfinga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;

	if (!dest && !src)
		return (NULL);
	dest_ptr = (unsigned char *) dest;
	src_ptr = (unsigned char *) src;
	while (n--)
		*dest_ptr++ = *src_ptr++;
	return (dest);
}
/*
int main()
{
    char src[] = "Cruzeiro";
    char dest[10];
	char dest1[10];

    ft_memcpy(dest, src, sizeof(src));
    printf("Libft: %s\n", dest);
	memcpy(dest1, src, sizeof(src));
    printf("Original: %s\n", dest1);
}
*/
