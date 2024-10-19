/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minfinga <minfinga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 16:50:27 by minfinga          #+#    #+#             */
/*   Updated: 2024/05/19 20:25:47 by minfinga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*ptr;

	ptr = (char *)s;
	while (n > 0)
	{
		ptr[n - 1] = c;
		n--;
	}
	return (s);
}
/*
int main()
{
    char    buffer[10] = {"abc def"};
    
    ft_memset(buffer, '1', 4);
    printf("Libft: %s\n", buffer);

    memset(buffer, '1', 4);
    printf("Original: %s\n", buffer);
}
*/
