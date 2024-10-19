/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minfinga <minfinga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 22:04:38 by minfinga          #+#    #+#             */
/*   Updated: 2024/05/19 22:11:20 by minfinga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	return (c);
}
/*
 int main()
 {
    char    character = 'A';

    printf("Caractere: %c\n", character);
    printf("Libft: %c\n", ft_tolower(character));
    printf("Original: %c\n", tolower(character));
 }
 */