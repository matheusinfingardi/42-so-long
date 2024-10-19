/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minfinga <minfinga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 18:38:07 by minfinga          #+#    #+#             */
/*   Updated: 2024/05/20 21:26:26 by minfinga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
/*
void	uppercase(unsigned int index, char *c)
{
    if (*c >= 'a' && *c <= 'z') 
        *c -= 32;
}
int	main()
{
    char str[] = "CRUZEIRO, gigante!";

    printf("String original: %s\n", str);
    ft_striteri(str, uppercase);
    printf("String modificada: %s\n", str);
    return (0);
}
*/