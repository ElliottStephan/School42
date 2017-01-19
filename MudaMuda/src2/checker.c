/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 13:18:50 by estephan          #+#    #+#             */
/*   Updated: 2017/01/18 17:35:06 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include2/checker.h"

int				main(int ac, char **av)
{
	t_plst		*la;
	t_plst		*lb;
	char		*s;
	int			error;

	s = NULL;
	if (ac == 1)
		return (0);
	error = 0;
	la = ft_parsing(ac, av, &error);
	lb = ft_pslstnew();
	while (get_next_line(0, &s) == 1 && error != 1)
		error = ft_parser(s, la, lb);
	if (error == 1)
		write(1, "Error\n", 6);
	else if (ft_issortasc(la) != 0)
		write(1, "KO\n", 3);
	else
		write(1, "OK\n", 3);
	return (0);
}

int				ft_parser(char *s, t_plst *la, t_plst *lb)
{
	int			x;

	x = 0;
	if (!ft_strcmp(s, "sa"))
		ft_swaper(la);
	else if (!ft_strcmp(s, "sb"))
		ft_swaper(lb);
	else if (!ft_strcmp(s, "ss"))
	{
		ft_swaper(la);
		ft_swaper(lb);
	}
	else if (!ft_strcmp(s, "pa"))
		ft_pusher(lb, la);
	else if (!ft_strcmp(s, "pb"))
		ft_pusher(la, lb);
	else if (!ft_strcmp(s, "ra"))
		ft_rotater(la);
	else if (!ft_strcmp(s, "rb"))
		ft_rotater(lb);
	else
		x += ft_parser_part2(s, la, lb);
	return (x);
}

int				ft_parser_part2(char *s, t_plst *la, t_plst *lb)
{
	if (!ft_strcmp(s, "rr"))
	{
		ft_rotater(la);
		ft_rotater(lb);
	}
	else if (!strcmp(s, "rra"))
		ft_revrotater(la);
	else if (!strcmp(s, "rrb"))
		ft_revrotater(lb);
	else if (!strcmp(s, "rrr"))
	{
		ft_revrotater(la);
		ft_revrotater(lb);
	}
	else
		return (1);
	return (0);
}
