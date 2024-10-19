/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minfinga <minfinga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 22:02:19 by minfinga          #+#    #+#             */
/*   Updated: 2024/05/19 22:06:17 by minfinga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}
/*
 int main()
 {
    char    character = 'a';

    printf("Caractere: %c\n", character);
    printf("Libft: %c\n", ft_toupper(character));
    printf("Original: %c\n", toupper(character));
 }
 */