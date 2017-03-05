/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_pos.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 11:54:19 by estephan          #+#    #+#             */
/*   Updated: 2017/03/05 17:16:24 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/lem_in.h"

int				ft_add_pos(t_plst *anthill)
{
	t_node		*tmp;

	tmp = anthill->head;
	while (tmp)
	{
		if (tmp->type == 2)
		{
			tmp->pos = 0;
			ft_add_pos2(anthill, tmp);
			return (0);
		}
		tmp = tmp->next;
	}
	return (0);
}

int				ft_add_pos2(t_plst *anthill, t_node *tmp)
{
	char		**room;
	t_node		*tmp2;
	int			i;

	i = 0;
	tmp2 = anthill->head;
	room = ft_strsplit(tmp->link, '-');
	while (room[i])
	{
		tmp2 = ft_this_node(anthill, room[i]);
		if (tmp2->pos > (tmp->pos + 1) || tmp2->pos == -1)
		{
			tmp2->pos = (tmp->pos + 1);
			ft_add_pos2(anthill, tmp2);
		}
		i++;
	}
	return (0);
}

t_node			*ft_this_node(t_plst *anthill, char *s)
{
	t_node		*tmp;

	tmp = anthill->head;
	while (tmp)
	{
		if (!(ft_strcmp(s, tmp->name)))
		{
			return (tmp);
		}
		tmp = tmp->next;
	}
	return (NULL);
}
