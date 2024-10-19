/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minfinga <minfinga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 18:41:14 by minfinga          #+#    #+#             */
/*   Updated: 2024/05/21 22:32:13 by minfinga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/* int main()
{
    char c;
    c = '3';
  
    printf("Libft:%d\n", ft_isdigit(c));
    printf("Original:%d\n", ft_isdigit(c));

    c = 'a';
    
    printf("Libft:%d\n", ft_isdigit(c));
    printf("Original:%d\n", ft_isdigit(c));
    
    return(0);
} */