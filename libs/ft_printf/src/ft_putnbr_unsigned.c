/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minfinga <minfinga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 17:07:13 by minfinga          #+#    #+#             */
/*   Updated: 2024/06/05 18:23:26 by minfinga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_unsigned(unsigned int n, size_t *i)
{
	if (n >= 10)
		ft_putnbr_unsigned((n / 10), i);
	ft_putchar(((n % 10) + '0'), i);
}
