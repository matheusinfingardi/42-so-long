/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minfinga <minfinga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 19:10:02 by minfinga          #+#    #+#             */
/*   Updated: 2024/05/20 18:50:10 by minfinga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	while (s1[i])
	{
		str[j++] = s1[i++];
	}
	i = 0;
	while (s2[i])
	{
		str[j++] = s2[i++];
	}
	str[j] = '\0';
	return (str);
}
/*
int	main()
{
	char const 	*s1 = "Cruzeiro";
	char const *s2 = "Cabuloso";
	char *result = ft_strjoin(s1, s2);
	
	if(result != NULL)
	{
		printf("Resultado: %s\n", result);
		free(result);
	} 
	else
	{
		printf("Erro: falha ao alocar memoria");
	}
*/