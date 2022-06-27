/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrhexlower.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messafi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 03:21:52 by messafi           #+#    #+#             */
/*   Updated: 2021/12/23 04:50:18 by messafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrhexupper(unsigned int n, int z)
{
	char	*hexa;
	int		i;
	int		temp;

	i = 0;
	hexa = malloc(sizeof(char) * 16);
	if (n == 0)
		z = ft_putchar('0', z);
	while (n)
	{
		temp = 0;
		temp = n % 16;
		if (temp < 10)
			hexa[i++] = (temp + 48);
		else
			hexa[i++] = (temp + 55);
		n = n / 16;
	}
	while (i--)
		z = ft_putchar(hexa[i], z);
	free(hexa);
	return (z);
}
