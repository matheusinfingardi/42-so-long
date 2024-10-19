/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minfinga <minfinga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 19:12:23 by minfinga          #+#    #+#             */
/*   Updated: 2024/05/21 22:31:33 by minfinga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (0 <= c && 127 >= c)
		return (1);
	return (0);
}
/*
int main()
{
    int c;
    c = '3';
  
    printf("Libft:%d\n", ft_isascii(c));
    printf("Original:%d\n", isascii(c));

    c = 128;
    
    printf("Libft:%d\n", ft_isascii(c));
    printf("Original:%d\n", isascii(c));
    
    return(0);
}
*/