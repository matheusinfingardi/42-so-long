/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minfinga <minfinga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 21:48:03 by minfinga          #+#    #+#             */
/*   Updated: 2024/06/05 16:27:30 by minfinga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *s, ...);
void	ft_putchar(char c, size_t *i);
void	ft_putstr(const char *str, size_t *i);
void	ft_putnbr(int n, size_t *i);
void	ft_putnbr_unsigned(unsigned int n, size_t *i);
void	ft_puthex(unsigned int n, size_t *i, const char *s);
void	ft_putpoint(unsigned long n, size_t *i);

#endif