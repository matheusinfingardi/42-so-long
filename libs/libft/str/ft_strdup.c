/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minfinga <minfinga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:51:02 by minfinga          #+#    #+#             */
/*   Updated: 2024/05/17 00:45:51 by minfinga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*dup;

	len = ft_strlen(s);
	dup = (char *)malloc((len + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, s, len + 1);
	return (dup);
}
/*
int main()
{
    const char  *original = "Cruzeiro";
    char    *duplicate = ft_strdup(original);

    if(duplicate != NULL)
    {
        printf("String duplicada: %s\n", duplicate);
        free(duplicate);
        printf("Memoria Liberada com sucesso");
    }
    else
    {
     printf("Falha ao duplicar string");
    }
}
*/
