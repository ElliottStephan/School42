/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortmin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 12:19:16 by estephan          #+#    #+#             */
/*   Updated: 2017/01/15 17:46:01 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*
** find the min in the list.
*/

int				ft_findmin(t_plst *l)
{
	t_node		*tmp;
	int			min;

	tmp = l->head;
	min = tmp->v;
	while (tmp)
	{
		if (tmp->v < min)
			min = tmp->v;
		tmp = tmp->next;
	}
	return (min);
}

/*
** Rotate or revrotate... If min is near -midl or +midl 
*/

static t_plst	*ft_bubble(t_plst *la, t_plst *mv, int min)
{
	int			pos;

	pos = ft_locateit(la, min);
	if (pos > 2)
	{
		while (la->head->v != min)
			mv = ft_rotate(la, mv, 0);
	}
	else if (pos <= 2)
	{
		while (la->head->v != min)
			mv = ft_revrotate(la, mv, 0);
	}
	return (mv);
}

/*
** Catch the min put him on the top then push him on the top of b
*/

t_plst			*ft_sortmin(t_plst *la, t_plst *lb, t_plst *mv)
{
	t_node		*ta;
	t_node		*tb;
	int			min;

	ta = la->head;
	tb = lb->head;
	while (la->len > 0)
	{
		min = ft_findmin(la);
		mv = ft_bubble(la, mv, min);
		mv = ft_push_b(la, lb, mv);
	}
	while (lb->len > 0)
		mv = ft_push_a(la, lb, mv);
	return (mv);
}
