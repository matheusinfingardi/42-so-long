/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minfinga <minfinga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:59:28 by minfinga          #+#    #+#             */
/*   Updated: 2024/05/20 18:21:09 by minfinga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_calloc(1, sizeof(char)));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}
/*
int main()
{
	const char	*original = "123456CruzeiroCabuloso";
	unsigned int	start = 6;
	size_t len = 8;

	char *substr = ft_substr(original, start, len);
	if(substr != NULL)
	{
		printf("Substring: %s\n", substr);
		free(substr);
	}
	else
	{
		printf("Erro ao criar a substring");
	}
}
*/
