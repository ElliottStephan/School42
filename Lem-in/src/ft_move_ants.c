/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_ants.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 14:55:23 by estephan          #+#    #+#             */
/*   Updated: 2017/03/08 12:13:39 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/lem_in.h"

int				ft_bouge_tes_fourmis(t_plst *anthill)
{
	t_node		*tmp;
	t_node		*tmp2;

	tmp = anthill->head;
	tmp2 = anthill->head;
	while (tmp)
	{
		if (tmp->type == 1)
			break ;
		tmp = tmp->next;
	}
	while (tmp2)
	{
		if (tmp2->type == 2)
			break ;
		tmp2 = tmp2->next;
	}
	ft_move_them(tmp, tmp2, anthill);
	return (0);
}

int				ft_move_them(t_node *tmp, t_node *tmp2, t_plst *anthill)
{
	int			i;

	i = tmp->ants;
	tmp = anthill->head;
	while (tmp2 && tmp2->ants < i)
	{
		tmp = anthill->head;
		while (tmp)
		{
			if (tmp->ants == 0)
				tmp->vide = 1;
			else
				tmp->vide = 0;
			tmp = tmp->next;
		}
		while (ft_vide(anthill) != 0)
		{
			tmp = ft_find(anthill);
			ft_move_one(tmp, anthill);
		}
		ft_printf("\n");
	}
	return (0);
}

int				ft_move_one(t_node *tmp, t_plst *anthill)
{
	char		**room;
	int			i;
	int			a;
	int			fu;
	t_node		*tmp2;

	fu = tmp->fu;
	tmp->fu -= 1;
	tmp->ants -= 1;
	a = -1;
	i = 223456789;
	tmp2 = anthill->head;
	room = ft_strsplit(tmp->link, '-');
	while (room[++a])
	{
		while (tmp2)
		{
			if (!(ft_strcmp(tmp2->name, room[a])) && tmp2->pos < i)
			{
				i = tmp2->pos;
				tmp = tmp2;
				break ;
			}
			tmp2 = tmp2->next;
		}
		tmp2 = anthill->head;
	}
	tmp->ants += 1;
	tmp->fu = fu;
	ft_printf("L%d-%s ", tmp->fu, tmp->name);
	return (1);
}

t_node			*ft_find(t_plst *anthill)
{
	t_node		*tmp;
	t_node		*tmp2;

	tmp = anthill->head;
	tmp2 = anthill->head;
	while (tmp)
	{
		if ((tmp->pos < tmp2->pos && tmp->vide == 0 && tmp->pos != 0) ||
				(tmp2->vide == 1 && tmp->pos != 0))
			tmp2 = tmp;
		tmp = tmp->next;
	}
	tmp2->vide = 1;
	return (tmp2);
}

int				ft_vide(t_plst *anthill)
{
	int			i;
	t_node		*tmp;

	tmp = anthill->head;
	i = 0;
	while (tmp)
	{
		if (tmp->vide == 0 && tmp->type != 2)
			i++;
		tmp = tmp->next;
	}
	return (i);
}
