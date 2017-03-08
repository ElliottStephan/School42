/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_links.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 11:40:04 by estephan          #+#    #+#             */
/*   Updated: 2017/03/08 12:12:49 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/lem_in.h"

int			ft_add_links(char *s, t_plst *anthill)
{
	t_node	*tmp;
	char	**room;

	tmp = anthill->head;
	room = ft_strsplit(s, '-');
	if (tmp)
	{
		while (tmp)
		{
			if (!ft_strcmp(room[0], tmp->name))
			{
				tmp->link = ft_strjoin2(tmp->link, room[1]);
				return (1);
			}
			tmp = tmp->next;
		}
	}
	return (0);
}

int			ft_add_links2(char *s, t_plst *anthill)
{
	t_node	*tmp;
	char	**room;

	tmp = anthill->head;
	room = ft_strsplit(s, '-');
	if (tmp)
	{
		while (tmp)
		{
			if (!ft_strcmp(room[1], tmp->name))
			{
				tmp->link = ft_strjoin2(tmp->link, room[0]);
				return (1);
			}
			tmp = tmp->next;
		}
	}
	return (0);
}

int			ft_add_info(t_plst *anthill, char *s, int info)
{
	t_node	*tmp;

	tmp = anthill->head;
	if (tmp)
	{
		while (tmp)
		{
			if (!ft_strcmp(s, tmp->name))
			{
				tmp->type = info;
				return (1);
			}
			tmp = tmp->next;
		}
	}
	return (0);
}
