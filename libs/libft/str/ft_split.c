/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minfinga <minfinga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 01:35:47 by minfinga          #+#    #+#             */
/*   Updated: 2024/05/22 17:53:08 by minfinga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	safe_malloc(char **token_v, int position, size_t buffer)
{
	int	i;

	i = 0;
	token_v[position] = malloc(buffer);
	if (token_v[position] == NULL)
	{
		while (i < position)
		{
			free(token_v[i++]);
		}
		free(token_v);
		return (1);
	}
	return (0);
}

static int	fill(char **token_v, char const *s, char delimeter)
{
	size_t	len;
	int		i;

	i = 0;
	while (*s)
	{
		len = 0;
		while (*s == delimeter && *s)
			s++;
		while (*s != delimeter && *s)
		{
			len++;
			s++;
		}
		if (len)
		{
			if (safe_malloc(token_v, i, len + 1))
				return (1);
			ft_strlcpy(token_v[i], s - len, len + 1);
		}
		i++;
	}
	return (0);
}

static size_t	count_tokens(char const *s, char delimeter)
{
	size_t	tokens;
	int		inside_token;

	tokens = 0;
	while (*s)
	{
		inside_token = 0;
		while (*s == delimeter && *s)
			s++;
		while (*s != delimeter && *s)
		{
			if (!inside_token)
			{
				tokens++;
				inside_token = 42;
			}
			s++;
		}
	}
	return (tokens);
}

char	**ft_split(char const *s, char c)
{
	size_t	tokens;
	char	**token_v;

	if (s == NULL)
		return (NULL);
	tokens = 0;
	tokens = count_tokens(s, c);
	token_v = malloc((tokens + 1) * sizeof(char *));
	if (token_v == NULL)
		return (NULL);
	token_v[tokens] = NULL;
	if (fill(token_v, s, c))
	{
		return (NULL);
	}
	return (token_v);
}
/*
int	main()
{
	char **result;
    printf("Splits:\n");
    result = ft_split("Cruzeiro Cabuloso Maior da Historia", ' ');
    if (result)
    {
        int i = 0;
        while (result[i] != NULL)
        {
            printf("%s\n", result[i]);
            free(result[i]);
            i++;
        }
        free(result);
    }
    else
        printf("Erro: a função ft_split retornou NULL\n");
}
*/