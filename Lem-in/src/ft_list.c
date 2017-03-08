/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 15:48:50 by estephan          #+#    #+#             */
/*   Updated: 2017/03/08 12:13:10 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/lem_in.h"

t_plst			*ft_pslstnew(void)
{
	t_plst		*list;

	if (!(list = (t_plst*)malloc(sizeof(t_plst))))
		return (NULL);
	if (list != NULL)
	{
		list->len = 0;
		list->head = NULL;
		list->tail = NULL;
	}
	return (list);
}

t_plst			*ft_list_append(t_plst *list, char *s)
{
	t_node		*new;

	if (list != NULL)
	{
		if ((new = (t_node*)malloc(sizeof(t_node))) != NULL)
		{
			new->name = s;
			new->pos = -1;
			new->next = NULL;
			if (list->tail == NULL)
			{
				list->head = new;
				list->tail = new;
			}
			else
			{
				list->tail->next = new;
				list->tail = new;
			}
			list->len++;
		}
	}
	return (list);
}

int				ft_name_room(t_plst *anthill, int info, char *s)
{
	char		**room;

	room = ft_strsplit(s, ' ');
	ft_list_append(anthill, room[0]);
	if (info)
		ft_add_info(anthill, room[0], info);
	return (0);
}
