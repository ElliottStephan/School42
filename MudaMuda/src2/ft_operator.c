/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operator.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 17:09:49 by estephan          #+#    #+#             */
/*   Updated: 2017/01/17 19:54:55 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include2/checker.h"

void		ft_swaper(t_plst *l)
{
	int	tmp;

	if (l->head == NULL || l->head->next == NULL)
		return ;
	tmp = l->head->next->v;
	l->head->next->v = l->head->v;
	l->head->v = tmp;
}

void		ft_pusher(t_plst *la, t_plst *lb)
{
	t_node	*tmp;

	if (lb->head == NULL)
		return ;
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
}

void		ft_rotater(t_plst *l)
{
	t_node	*tmp;

	if (l->head == NULL || l->head == l->tail)
		return ;
	tmp = l->head;
	l->head = l->head->next;
	l->tail->next = tmp;
	l->tail = tmp;
	l->tail->next = NULL;
	while (tmp->next != NULL)
		tmp = tmp->next;
}

void		ft_revrotater(t_plst *l)
{
	t_node	*tmp;
	t_node	*tta;

	if (l->head == NULL || l->head == l->tail)
		return ;
	tmp = l->tail;
	tta = l->head;
	while (tta->next != tmp)
		tta = tta->next;
	l->tail = tta;
	l->tail->next = NULL;
	tmp->next = l->head;
	l->head = tmp;
}
