/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messafi <messafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:52:34 by messafi           #+#    #+#             */
/*   Updated: 2022/06/23 15:51:39 by messafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

char	*ft_strdup(const char *s)
{
	char	*dst;
	char	*p;
	int		i;

	i = 0;
	while (s[i])
		i++;
	dst = (char *)malloc(i * sizeof(char) + 1);
	if (dst == NULL)
		return (0);
	p = dst;
	while (*s)
	{
		*dst++ = *s++;
	}
	*dst = '\0';
	return (p);
}

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

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	size_t	z;
	char	*blank;
	int		len;

	i = 0;
	z = 0;
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	blank = (char *)malloc(sizeof(char) * (len + 1));
	if (!blank)
		return (0);
	while (s1[i] != '\0')
	{
		blank[i] = s1[i];
		i++;
	}
	while (s2[z] != '\0')
	{
		blank[i++] = s2[z++];
	}
	blank[i] = '\0';
	return (blank);
}

void	ft_putstr(char *str)
{
	if (!str)
		return ;
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	power(int i)
{
	int	o;

	o = 1;
	while (i > 0)
	{
		o *= 2;
		i--;
	}
	return (o);
}
