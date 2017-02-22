/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_room.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 11:21:40 by estephan          #+#    #+#             */
/*   Updated: 2017/02/21 12:12:51 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/lem_in.h"

int		ft_is_room(char *s)
{
	char	**room;

	room = ft_strsplit(s, ' ');
	if (room[3] == NULL)
	{
			ft_check(room[1]);
		   	ft_check(room[2]);
			return (1);
	}
	return (0);
}

int		ft_is_link(char *s, t_plst *anthill)
{
	char	**name;
	int		count;

	name = ft_strsplit(s, '-');
	count = 0;
	while (name[count])
		count++;
	if (count == 2)
	{
		if (ft_name_ok(name[0], anthill) && ft_name_ok(name[1], anthill))
			return (1);
	}
	return (0);
}

int		ft_name_ok(char *s, t_plst *anthill)
{
	t_node		*tmp;
	int			ok;

	tmp = anthill->head;
	ok = 0;
	if (tmp)
	{
		while (tmp)
		{
			if (!ft_strcmp(s, tmp->name))
				ok = 1;
			tmp = tmp->next;
		}
	}
	return (ok);
}
