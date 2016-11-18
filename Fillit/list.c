/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 00:41:30 by pribault          #+#    #+#             */
/*   Updated: 2016/11/17 00:42:50 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_lstlen(t_piece *head)
{
	int		i;

	i = 0;
	while (head)
	{
		head = head->next;
		i++;
	}
	return (i);
}
