/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortmin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 12:19:16 by estephan          #+#    #+#             */
/*   Updated: 2017/01/17 20:35:44 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*
** Find one under range.
*/

static long long int		ft_findit(t_plst *l)
{
	t_node					*tmp1;
	t_node					*tmp;
	int						ret;
	int						walid;

	tmp1 = l->head;
	ret = tmp1->v;
	walid = 0;
	if (l->len > 20)
	{
		while (tmp1)
		{
			tmp = l->head;
			while (tmp)
			{
				if (ret < tmp->v)
					walid += 1;
				if (walid >= ((l->len / 2) + (l->len / 4)))
					return (ret);
				tmp = tmp->next;
			}
			walid = 0;
			tmp1 = tmp1->next;
			ret = tmp1->v;
		}
	}
	else
		return (ft_findmax(l));
	return (0);
}

/*
** find the min in the list.
*/

int						ft_findmax(t_plst *l)
{
	t_node				*tmp;
	int					max;

	tmp = l->head;
	max = tmp->v;
	while (tmp)
	{
		if (tmp->v > max)
			max = tmp->v;
		tmp = tmp->next;
	}
	return (max);
}

int						ft_findmin(t_plst *l)
{
	t_node				*tmp;
	int					min;

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

static t_plst			*ft_bubble(t_plst *la, t_plst *mv, int min)
{
	int					pos;

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

t_plst					*ft_sortmin(t_plst *la, t_plst *lb, t_plst *mv)
{
	t_node				*ta;
	t_node				*tb;
	long long int		num;
	int					pack;

	ta = la->head;
	tb = lb->head;
	while (la->len > 0)
	{
		num = ft_findit(la);
		mv = ft_bubble(la, mv, num);
		mv = ft_push_b(la, lb, mv);
	}
	while (lb->len > 0)
	{
		num = ft_findmax(lb);
		mv = ft_bubble(lb, mv, num);
		mv = ft_push_a(la, lb, mv);
	}
	return (mv);
}
