/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 12:18:06 by estephan          #+#    #+#             */
/*   Updated: 2017/01/16 13:59:33 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*
** revrorate : last = first other +1
*/

t_plst			*ft_revrotate(t_plst *l, t_plst *mv, int ab)
{
	t_node		*tmp;
	t_node		*tta;

	if (l->head == NULL || l->head == l->tail)
		return (mv);
	tmp = l->tail;
	tta = l->head;
	while (tta->next != tmp)
		tta = tta->next;
	l->tail = tta;
	l->tail->next = NULL;
	tmp->next = l->head;
	l->head = tmp;
	if (ab < 0)
		return (NULL);
	return (mv = ft_lstappend(mv, 8 + ab));
}

t_plst			*ft_rotate(t_plst *l, t_plst *mv, int ab)
{
	t_node		*tmp;

	if (l->head == NULL || l->head == l->tail)
		return (mv);
	tmp = l->head;
	l->head = l->head->next;
	l->tail->next = tmp;
	l->tail = tmp;
	l->tail->next = NULL;
	while (tmp->next != NULL)
		tmp = tmp->next;
	if (ab < 0)
		return (NULL);
	return (mv = ft_lstappend(mv, 5 + ab));
}

t_plst			*ft_push_a(t_plst *la, t_plst *lb, t_plst *mv)
{
	t_node		*tmp;

	if (lb->head == NULL)
		return (mv);
	else
	{
		tmp = lb->head;
		lb->head = lb->head->next;
		if (la->head != NULL)
			tmp->next = la->head;
		la->head = tmp;
		if (la->tail == NULL)
		{
			la->tail = tmp;
			la->tail->next = NULL;
		}
		else if (lb->head == NULL)
			lb->tail = NULL;
		la->len++;
		lb->len--;
	}
	return (mv = ft_lstappend(mv, 3));
}

t_plst			*ft_push_b(t_plst *la, t_plst *lb, t_plst *mv)
{
	t_node		*tmp;

	if (la->head == NULL)
		return (mv);
	else
	{
		tmp = la->head;
		la->head = la->head->next;
		if (lb->head != NULL)
			tmp->next = lb->head;
		lb->head = tmp;
		if (lb->tail == NULL)
		{
			lb->tail = tmp;
			lb->tail->next = NULL;
		}
		else if (la->head == NULL)
			la->tail = NULL;
		lb->len++;
		la->len--;
	}
	return (mv = ft_lstappend(mv, 4));
}

t_plst			*ft_swap(t_plst *l, t_plst *mv, int ab)
{
	int			tmp;

	if (l->head == NULL || l->head->next == NULL)
		return (mv);
	tmp = l->head->next->v;
	l->head->next->v = l->head->v;
	l->head->v = tmp;
	if (ab < 0)
		return (NULL);
	return (mv = ft_lstappend(mv, 0 + ab));
}
