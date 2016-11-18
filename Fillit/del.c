/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 22:01:53 by pribault          #+#    #+#             */
/*   Updated: 2016/11/17 00:56:36 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		del_all_pieces(t_piece *head)
{
	t_piece	*piece;
	t_piece	*next;

	piece = head;
	head = NULL;
	while (piece)
	{
		next = piece->next;
		free(piece);
		piece = next;
	}
}

void		*del_and_exit(t_piece *head)
{
	del_all_pieces(head);
	return (NULL);
}

int			del_and_exit2(t_piece *head)
{
	del_all_pieces(head);
	return (0);
}
