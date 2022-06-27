/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messafi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 02:46:31 by messafi           #+#    #+#             */
/*   Updated: 2021/12/21 05:03:25 by messafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	print(char form, va_list pp, int i)
{
	if (form == 'c')
		i = ft_putchar(va_arg(pp, int), i);
	if (form == 's')
		i = ft_printstr(va_arg(pp, char *), i);
	if (form == 'd' || form == 'i')
		i = ft_putnbrsigned(va_arg(pp, int), i);
	if (form == 'u')
		i = ft_putnbrunsigned(va_arg(pp, unsigned int), i);
	if (form == 'X')
		i = ft_putnbrhexupper(va_arg(pp, unsigned int), i);
	if (form == 'x')
		i = ft_putnbrhexlower(va_arg(pp, unsigned int), i);
	if (form == 'p')
		i = ft_put(va_arg(pp, unsigned long), i);
	if (form == '%')
		i = ft_putchar('%', i);
	return (i);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	char	form;
	va_list	pp;

	i = 0;
	va_start(pp, format);
	while (*format != '\0')
	{
		form = *format;
		if (form == '%')
		{
			format++;
			form = *format;
			i = print(form, pp, i);
		}
		else
			i = ft_putchar(form, i);
		format++;
	}
	va_end(pp);
	return (i);
}
