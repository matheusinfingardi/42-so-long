/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minfinga <minfinga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:07:34 by minfinga          #+#    #+#             */
/*   Updated: 2024/05/21 00:44:11 by minfinga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	unsigned int	ft_len(int i)
{
	unsigned int	len;

	len = 0;
	if (i <= 0)
	{
		len++;
	}
	while (i != 0)
	{
		i /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				len;
	long			num;

	num = n;
	len = ft_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		num = -num;
	}
	if (num == 0)
		str[0] = '0';
	while (num > 0)
	{
		str[--len] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}
/*
int	main()
{
    char *str = ft_itoa(-2134);
    printf("%s\n", str);
    str = ft_itoa(42);
    printf("%s\n", str);
    str = ft_itoa(2147483647);
    printf("%s\n", str);
    str = ft_itoa(0);
    printf("%s\n", str);
    str = ft_itoa(-2147483648);
    printf("%s\n", str);
    str = ft_itoa(-42);
    printf("%s\n", str);
}
*/
