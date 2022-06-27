/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messafi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 04:43:15 by messafi           #+#    #+#             */
/*   Updated: 2021/12/23 04:51:50 by messafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include<stdarg.h>
# include<unistd.h>
# include<stdlib.h>

int	ft_putchar(char c, int i);
int	ft_printf(const char *format, ...);
int	ft_printstr(char *str, int i);
int	ft_putnbrsigned(int n, int i);
int	ft_putnbrunsigned(unsigned int n, int i);
int	ft_putnbrhexlower(unsigned int n, int z);
int	ft_putnbrhexupper(unsigned int n, int z);
int	ft_put(unsigned long n, int z);

#endif
