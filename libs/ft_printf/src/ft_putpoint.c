/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpoint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minfinga <minfinga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 17:07:48 by minfinga          #+#    #+#             */
/*   Updated: 2024/06/05 16:29:43 by minfinga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putptr_nbr(unsigned long n, size_t *i)
{
	char	*base;

	base = "0123456789abcdef";
	if (n >= 16)
	{
		ft_putptr_nbr(n / 16, i);
	}
	ft_putchar(base[n % 16], i);
}

void	ft_putpoint(unsigned long n, size_t *i)
{
	if (n == 0)
	{
		write(1, "(nil)", 5);
		*i += 5;
		return ;
	}
	write(1, "0x", 2);
	*i += 2;
	ft_putptr_nbr(n, i);
}
