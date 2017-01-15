/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bonusdisplaystack.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 12:17:23 by estephan          #+#    #+#             */
/*   Updated: 2017/01/12 12:17:39 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void		ft_print_l(t_plst *l, char *str)
{
	t_node	*tmp;

	tmp = l->head;
	ft_printf("%s |", str);
	while (tmp)
	{
		ft_printf("%7d", tmp->v);
		tmp = tmp->next;
	}
	ft_printf("|\n");
}
