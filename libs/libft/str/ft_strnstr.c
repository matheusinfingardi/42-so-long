/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minfinga <minfinga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:18:19 by minfinga          #+#    #+#             */
/*   Updated: 2024/05/19 23:50:49 by minfinga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *source, const char *search, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (search[0] == '\0')
	{
		return ((char *) source);
	}
	while (source[i] && i < len)
	{
		j = 0;
		while (source[i + j] == search[j] && source[i + j] && i + j < len)
		{
			j++;
			if (search[j] == '\0')
			{
				return ((char *)(source + i));
			}
		}
		i++;
	}
	return (NULL);
}
/*
int main()
{
    const char *src = "Cruzeiro Cabuloso Maior de Minas";
    const char *search = "Maior";
    size_t len = 30;
	
    printf("Libft: %s\n", ft_strnstr(src, search, len));
}
*/