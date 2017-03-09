/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   norm.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 15:05:57 by estephan          #+#    #+#             */
/*   Updated: 2017/03/08 16:13:15 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/lem_in.h"

t_node			*ft_move(char *s, int *i, t_plst *anthill)
{
	t_node		*tmp;

	tmp = anthill->head;
	while (tmp)
	{
		if (!(ft_strcmp(tmp->name, s)) && tmp->pos < *i)
		{
			*i = tmp->pos;
			return (tmp);
		}
		tmp = tmp->next;
	}
	return (NULL);
}
