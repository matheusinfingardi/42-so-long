/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minfinga <minfinga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 18:21:55 by minfinga          #+#    #+#             */
/*   Updated: 2024/05/20 21:03:47 by minfinga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *) malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char	uppercase(unsigned int index, char c)
{
    if (c >= 'a' && c <= 'z') {
        return (c - 32);
    } else {
        return (c);
    }
}

int	main(void)
{
    char original[] = "cruzeiro cabuloso";
    char *modified;

    modified = ft_strmapi(original, uppercase);

    printf("Original: %s\n", original);
    printf("Modified: %s\n", modified);

    free(modified);

    return (0);
}
*/