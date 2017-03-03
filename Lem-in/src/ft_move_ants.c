/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_ants.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 14:55:23 by estephan          #+#    #+#             */
/*   Updated: 2017/03/03 17:46:20 by estephan         ###   ########.fr       */
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
	while (tmp2->ants < i)
	{
		while (tmp)
		{
			if (tmp->ants == 0)
				tmp->vide = 1;
			else
				tmp->vide = 0;
			tmp = tmp->next;
		}
		tmp = anthill->head;
		while (tmp)
		{
			if (tmp->ants != 0 && tmp->type != 2 && tmp->vide == 0)
				ft_move_one(tmp, anthill);
			tmp = tmp->next;
		}
		printf("\n");
		tmp = anthill->head;
	}
	return (0);
}

int				ft_move_one(t_node *tmp, t_plst *anthill)
{
	char		**room;
	int			i;
	int			a;
	t_node		*tmp2;

	tmp->ants -= 1;
	a = 0;
	i = 223456789;
	tmp2 = anthill->head;
	room = ft_strsplit(tmp->link, '-');
	while (room[a])
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
		a++;
	}
	tmp->ants += 1;
	printf("Lnumfourmis-%s ", tmp->name);
	return (1);
}
