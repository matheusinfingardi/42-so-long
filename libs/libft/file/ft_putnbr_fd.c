/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minfinga <minfinga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 18:48:33 by minfinga          #+#    #+#             */
/*   Updated: 2024/05/20 22:09:14 by minfinga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}
/*
int main()
{
	ft_putnbr_fd(-2147483648, 1);
	write(1, "\n", 2);
	ft_putnbr_fd(-214748, 1);
	write(1, "\n", 2);
	ft_putnbr_fd(2147483647, 1);
	write(1, "\n", 2);
	ft_putnbr_fd(214748, 1);
	write(1, "\n", 2);
	ft_putnbr_fd(0, 1);
	write(1, "\n", 2);
	ft_putnbr_fd(10, 1);
	write(1, "\n", 2);
}
*/