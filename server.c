/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messafi <messafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:52:17 by messafi           #+#    #+#             */
/*   Updated: 2022/06/24 14:21:48 by messafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

t_save	g_v;

void	ft_put(int PID)
{
	if (!g_v.s)
		g_v.s = ft_strdup("");
	g_v.c += 1;
	g_v.s = ft_strjoin(g_v.s, g_v.s);
	g_v.s[g_v.c - 1] = g_v.j;
	g_v.s[g_v.c] = '\0';
	if (!g_v.j)
	{
		ft_putstr(g_v.s);
		kill(PID, SIGUSR1);
		free(g_v.s);
		g_v.s = NULL;
		g_v.c = 0;
	}
	g_v.j = 0;
	g_v.l = 0;
}

void	handler1(int i, siginfo_t *l, void *context)
{
	(void)context;
	(void)i;
	(g_v.l) += 1;
	if (g_v.l == 8)
		ft_put(l->si_pid);
}

void	handler2(int i, siginfo_t *l, void *context)
{	
	(void)context;
	(void)i;
	(g_v.j) += power(g_v.l);
	(g_v.l) += 1;
	if (g_v.l == 8)
		ft_put(l->si_pid);
}

int	main(void)
{
	int					i;
	struct sigaction	sa_handler1;
	struct sigaction	sa_handler2;

	i = getpid();
	sa_handler1.sa_sigaction = &handler1;
	sa_handler1.sa_mask = 0;
	sa_handler1.sa_flags = 0;
	sa_handler2.sa_sigaction = &handler2;
	sa_handler2.sa_mask = 0;
	sa_handler2.sa_flags = 0;
	ft_printf("PID = %d\n", i);
	sigaction(SIGUSR1, &sa_handler1, NULL);
	sigaction(SIGUSR2, &sa_handler2, NULL);
	while (1)
		;
}
