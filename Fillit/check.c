/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 13:58:05 by estephan          #+#    #+#             */
/*   Updated: 2016/11/18 14:02:03 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		check(char **array, t_piece *piece, int len)
{
	int		x;
	int		y;
	int		i;

	i = 0;
	while (i < SIZE)
	{
		if (piece->x[i] + piece->coords[X] >= len)
			return (-2);
		if (piece->y[i] + piece->coords[Y] >= len)
			return (-1);
		x = piece->x[i] + piece->coords[X];
		y = piece->y[i] + piece->coords[Y];
		if (array[y][x] != '.')
			return (0);
		i++;
	}
	return (1);
}
