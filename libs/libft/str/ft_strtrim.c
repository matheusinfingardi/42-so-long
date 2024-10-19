/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minfinga <minfinga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 01:09:51 by minfinga          #+#    #+#             */
/*   Updated: 2024/05/20 19:06:05 by minfinga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		j;
	char		*str;

	str = NULL;
	if (s1 && set)
	{
		i = 0;
		j = ft_strlen(s1);
		while (s1[i] && ft_strchr(set, s1[i]))
		{
			i++;
		}
		while (s1[j - 1] && ft_strchr(set, s1[j - 1]) && j > i)
		{
			j--;
		}
		str = (char *)malloc(sizeof(char) * (j - i + 1));
		if (str)
		{
			ft_strlcpy(str, &s1[i], j - i + 1);
			str[j - i] = '\0';
		}
	}
	return (str);
}
/*
int main()
{
	char const	*s1 = "XXXXCruzeiroXX";
	char const	*set = "X";
	char	*trimmed_str = ft_strtrim(s1, set);
	
	printf("String Antes: %s\n", s1);
	printf("String Depois: %s\n", ft_strtrim(s1, set));
	free(trimmed_str);
}
*/