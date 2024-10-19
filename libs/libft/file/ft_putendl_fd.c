/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minfinga <minfinga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 18:46:56 by minfinga          #+#    #+#             */
/*   Updated: 2024/05/20 21:59:44 by minfinga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
/*
int main()
{
	char	*str = "Cruzeiro Cabuloso Maior da Galaxia";
	char	*str1 = "Cruzeiro Cabuloso Maior da Galaxia2";
	
	ft_putendl_fd(str, 1);
	ft_putendl_fd(str1, 1);
}
*/