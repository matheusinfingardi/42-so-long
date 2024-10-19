/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minfinga <minfinga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 22:15:45 by minfinga          #+#    #+#             */
/*   Updated: 2024/05/19 22:43:36 by minfinga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last_occurrence;

	last_occurrence = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last_occurrence = s;
		s++;
	}
	if (*s == (char)(c))
	{
		return ((char *)s);
	}
	return ((char *)last_occurrence);
}
/*
int main()
{
    const char *str = "Cruzeiro Gigante";
    int search = 'z';
    int not_found = 'b';
    
    printf("Libft z: %s\n", ft_strrchr(str, search));
    printf("Libft b: %s\n", ft_strrchr(str, not_found));
    
    printf("Original z: %s\n", strrchr(str, search));
    printf("Original b: %s\n", strrchr(str, not_found));
}
*/