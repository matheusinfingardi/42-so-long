/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minfinga <minfinga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 16:56:58 by minfinga          #+#    #+#             */
/*   Updated: 2024/06/05 16:28:14 by minfinga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int n, size_t *i, const char *s)
{
	char	*str;

	if (*s == 'x')
		str = "0123456789abcdef";
	else
		str = "0123456789ABCDEF";
	if (n >= 16)
		ft_puthex(n / 16, i, s);
	ft_putchar(str[n % 16], i);
}
