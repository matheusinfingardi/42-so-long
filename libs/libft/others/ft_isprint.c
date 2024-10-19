/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minfinga <minfinga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 19:18:50 by minfinga          #+#    #+#             */
/*   Updated: 2024/05/21 22:32:24 by minfinga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (32 <= c && 126 >= c)
		return (1);
	return (0);
}
/*
int main()
{
    int c;
    c = '3';
  
    printf("Libft:%d\n", ft_isprint(c));
    printf("Original:%d\n", isprint(c));

    c = 14;
    
    printf("Libft:%d\n", ft_isprint(c));
    printf("Original:%d\n", isprint(c));
    
    return(0);
}
*/