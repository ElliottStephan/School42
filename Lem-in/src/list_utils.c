/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/07 15:07:25 by estephan          #+#    #+#             */
/*   Updated: 2017/03/07 15:12:44 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/lem_in.h"

void			ft_lstdellastone(t_plst *l)
{
	t_node		*tmp;
	t_node		*del;

	if (l->head != l->tail)
	{
		tmp = l->head;
		while (tmp->next != l->tail)
			tmp = tmp->next;
		del = l->tail;
		l->tail = tmp;
		l->tail->next = NULL;
		free(del);
		l->len--;
	}
}

void			ft_lstdelallnodes(t_plst *l)
{
	t_node		*tmp;
	t_node		*del;

	if (l->head != NULL)
	{
		tmp = l->head;
		while (tmp)
		{
			del = tmp;
			tmp = tmp->next;
			free(del);
		}
		l->head = NULL;
		l->tail = NULL;
		l->len = 0;
	}
}

void			ft_lstclear(t_plst *l)
{
	ft_lstdelallnodes(l);
	free(l);
}
