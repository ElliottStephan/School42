/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 12:18:17 by estephan          #+#    #+#             */
/*   Updated: 2017/01/14 12:04:48 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*
** Unique ? or Error.
*/

int				ft_isunique(t_plst *list, int v)
{
	t_node		*tmp;
	int			count;

	tmp = list->head;
	count = 0;
	if (tmp)
	{
		while (tmp)
		{
			if (v == tmp->v)
				ft_error();
			tmp = tmp->next;
		}
	}
	return (v);
}

/*
** Int ? or Error.
*/

int				ft_isint(t_plst *list, char *av)
{
	long		v;

	v = ft_atoi(av);
	return (IS_INT(v) ? ft_isunique(list, (int)v) : ft_error());
}

/*
** Digit ? or Error
*/

int				ft_check(t_plst *list, char *av)
{
	return (ft_strisdigit(av) ? ft_isint(list, av) : ft_error());
}

/*
** Check Bonus, just to know where we have to start the parsing
*/

int				ft_checkbonus(char **av, int *bonus)
{
	int			i;

	i = 0;
	if (ft_strcmp(av[1], "-v") == 0)
	{
		*bonus = 1;
		if (av[2])
			i = 1;
	}
	else if (ft_strcmp(av[1], "-c") == 0)
	{
		*bonus = 2;
		if (av[2])
			i = 1;
	}
	return (i);
}

/*
** Parsing : Check every "av" ( Be an int, Be unique) stock in la or Ret(error).
*/

t_plst			*ft_parsing(int ac, char **av, int *bonus)
{
	t_plst		*la;
	int			v;
	int			i;

	la = ft_pslstnew();
	i = 1 + ft_checkbonus(av, bonus);
	while (i < ac)
	{
		v = ft_check(la, av[i]);
		la = ft_lstappend(la, v);
		i++;
	}
	return (la);
}
