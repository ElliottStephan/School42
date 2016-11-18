/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_and_build.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 20:56:24 by pribault          #+#    #+#             */
/*   Updated: 2016/11/18 14:46:58 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_piece		*new_piece(char *str)
{
	t_piece	*new_piece;
	int		i[2];

	new_piece = (t_piece*)malloc(sizeof(t_piece));
	if (!new_piece)
		return (NULL);
	new_piece->coords[X] = -4;
	new_piece->coords[Y] = -4;
	i[0] = 0;
	i[1] = 0;
	while (i[0] < 19 && i[1] < SIZE)
	{
		if (str[i[0]] == '#')
		{
			new_piece->x[i[1]] = i[0] % 5;
			if (-(i[0] / 5) > new_piece->coords[Y])
				new_piece->coords[Y] = -(i[0] / 5);
			new_piece->y[i[1]++] = i[0] / 5;
			if (-(i[0] % 5) > new_piece->coords[X])
				new_piece->coords[X] = -(i[0] % 5);
		}
		i[0]++;
	}
	new_piece->next = NULL;
	return (new_piece);
}

int			check_pieces_around(t_piece *p)
{
	int		i;
	int		j;
	int		n;

	i = 0;
	n = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			if (p->x[i] == p->x[j])
				if (p->y[i] == p->y[j] - 1 || p->y[i] == p->y[j] + 1)
					n++;
			if (p->y[i] == p->y[j])
				if (p->x[i] == p->x[j] - 1 || p->x[i] == p->x[j] + 1)
					n++;
			j++;
		}
		i++;
	}
	if (n >= (2 * SIZE) - 2)
		return (1);
	return (0);
}

int			check_piece(char *str)
{
	int		i;
	int		n;

	i = 0;
	n = 0;
	while (i < 21)
	{
		if ((str[i] == '#' || str[i] == '.') && (i % 5 == 4 || i > 19))
			return (0);
		if (str[i] == '\n' && i % 5 != 4 && i < 20)
			return (0);
		if (str[i] != '\n' && str[i] != '#' && str[i] != '.')
			return (0);
		if (str[i] == '#')
			n++;
		i++;
	}
	if (n != SIZE)
		return (0);
	return (1);
}

t_piece		*check_and_build(int fd)
{
	t_piece	*head;
	t_piece	*piece;
	char	buffer[21];
	int		bytes_read;

	head = NULL;
	while ((bytes_read = read(fd, buffer, 21)))
	{
		if (bytes_read >= 20 && check_piece(buffer))
		{
			if (!head)
				piece = new_piece(buffer);
			else
				piece->next = new_piece(buffer);
			if (!head)
				head = piece;
			if (piece->next)
				piece = piece->next;
			if (!check_pieces_around(piece))
				return (del_and_exit(head));
		}
		else
			return (del_and_exit(head));
	}
	return (head);
}
