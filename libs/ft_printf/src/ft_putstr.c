/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minfinga <minfinga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 17:10:51 by minfinga          #+#    #+#             */
/*   Updated: 2024/06/05 16:29:48 by minfinga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(const char *str, size_t *i)
{
	if (!str)
		str = "(null)";
	while (*str)
	{
		ft_putchar(*str, i);
		str++;
	}
}
