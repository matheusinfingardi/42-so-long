/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minfinga <minfinga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:46:09 by minfinga          #+#    #+#             */
/*   Updated: 2024/05/21 22:31:53 by minfinga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (('a' <= c && 'z' >= c) || ('A' <= c && 'Z' >= c))
		return (1);
	return (0);
}
/*
int main()
{
    char c;
    c = '3';
  
    printf("Libft:%d\n", ft_isalpha(c));
    printf("Original:%d\n", ft_isalpha(c));

    c = 'a';
    
    printf("Libft:%d\n", ft_isalpha(c));
    printf("Original:%d\n", ft_isalpha(c));
    
    return(0);
}
*/