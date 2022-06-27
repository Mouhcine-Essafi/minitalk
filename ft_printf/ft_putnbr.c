/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messafi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 01:50:38 by messafi           #+#    #+#             */
/*   Updated: 2021/12/21 02:54:26 by messafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrsigned(int n, int i)
{
	if (n > -2147483648 && n < 0)
	{
		i = ft_putchar('-', i);
		i = ft_putnbrsigned(n * (-1), i);
	}
	else if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		i += 11;
	}
	else if (n > 9)
	{
		i = ft_putnbrsigned(n / 10, i);
		i = ft_putnbrsigned(n % 10, i);
	}
	else
	{
		i = ft_putchar(n + '0', i);
	}
	return (i);
}

int	ft_putnbrunsigned(unsigned int n, int i)
{
	if (n > 9)
	{
		i = ft_putnbrunsigned(n / 10, i);
		i = ft_putnbrunsigned(n % 10, i);
	}
	else
	{
		i = ft_putchar(n + '0', i);
	}
	return (i);
}
