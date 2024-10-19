/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minfinga <minfinga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:41:13 by minfinga          #+#    #+#             */
/*   Updated: 2024/04/28 00:49:41 by minfinga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	tmp = malloc(nmemb * size);
	if (!tmp)
	{
		return (NULL);
	}
	while (i < nmemb * size)
	{
		tmp[i++] = 0;
	}
	return (tmp);
}
/*
int main()
{
    size_t  nmemb = 5;
    size_t  size = sizeof(int);

    int *arr = (int *)ft_calloc(nmemb, size);

    if(arr != NULL)
    {
        printf("Valores iniciais: %d, %d, %d, %d\n", 
        arr[0], arr[1], arr[2], arr[3]);
        free(arr);
    }
   
    else
    {
     printf("Falha ao alocar memoria!\n");  
    }
}
*/
