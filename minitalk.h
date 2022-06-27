/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messafi <messafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:53:57 by messafi           #+#    #+#             */
/*   Updated: 2022/06/23 17:33:30 by messafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H
# include <unistd.h>
# include <stdlib.h>
# include <signal.h>
# include <stddef.h>
# include <stdio.h>

typedef struct s_save
{
	int		l;
	int		j;
	int		c;
	char	*s;
}	t_save;

int		ft_printf(const char *format, ...);
void	ft_putstr(char *str);
char	*ft_strdup(const char *s);
int		ft_strlen(char *str);
int		ft_atoi(const char *str);
int		power(int i);
char	*ft_strjoin(char *s1, char *s2);

#endif
