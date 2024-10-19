/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minfinga <minfinga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 21:32:02 by minfinga          #+#    #+#             */
/*   Updated: 2024/06/05 16:26:46 by minfinga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_check(const char *s, va_list args, size_t *i)
{
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			if (*s == 'c')
				ft_putchar(va_arg(args, int), i);
			else if (*s == 's')
				ft_putstr(va_arg(args, char *), i);
			else if (*s == 'd' || *s == 'i')
				ft_putnbr(va_arg(args, int), i);
			else if (*s == 'u')
				ft_putnbr_unsigned(va_arg(args, unsigned int), i);
			else if (*s == 'x' || *s == 'X')
				ft_puthex(va_arg(args, unsigned int), i, s);
			else if (*s == 'p')
				ft_putpoint(va_arg(args, unsigned long), i);
			else if (*s == '%')
				ft_putchar('%', i);
		}
		else
			ft_putchar(*s, i);
		s++;
	}
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	size_t	i;

	i = 0;
	va_start(args, s);
	ft_check(s, args, &i);
	va_end(args);
	return (i);
}
