/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messafi <messafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:52:43 by messafi           #+#    #+#             */
/*   Updated: 2022/06/23 17:26:44 by messafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	ft_strlen(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	long long int	r;
	int				s;

	r = 0;
	s = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			s *= -1;
	while (*str >= '0' && *str <= '9' && *str)
	{
		if (r > 2147483647 && s > 0)
			return (-1);
		if (-r < -2147483648 && s < 0)
			return (0);
		r = r * 10 + (*str++ - 48);
	}
	return (r * s);
}
