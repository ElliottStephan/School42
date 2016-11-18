/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 01:48:53 by pribault          #+#    #+#             */
/*   Updated: 2016/11/18 13:59:46 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	print(char **array, t_piece *piece, char c)
{
	int		len;
	int		i;
	int		x;
	int		y;

	len = ft_strlen(array[0]);
	i = 0;
	while (i < SIZE)
	{
		x = piece->x[i] + piece->coords[X];
		y = piece->y[i++] + piece->coords[Y];
		if (x >= len || y >= len)
			return ;
		array[y][x] = c;
	}
}

void	reset(t_piece *piece, int coord)
{
	int		i;

	if (coord == X || coord == 2)
		piece->coords[X] = -3;
	if (coord == Y || coord == 2)
		piece->coords[Y] = -3;
	i = 0;
	while (i < SIZE)
	{
		if ((coord == 2 || coord == Y) && -piece->y[i] > piece->coords[Y])
			piece->coords[Y] = -piece->y[i];
		if ((coord == 2 || coord == X) && -piece->x[i] > piece->coords[X])
			piece->coords[X] = -piece->x[i];
		i++;
	}
}

char	**new_array(char **array, int n)
{
	char	**new;

	free(array);
	new = (char**)malloc(sizeof(char*) * (n + 1));
	if (!new)
		return (NULL);
	if (!alloc_array(new, n))
	{
		free(new);
		return (NULL);
	}
	array = new;
	return (new);
}

char	**replace_and_exit(char **array, t_piece *piece, char c, char r)
{
	int		i;
	int		j;

	j = 0;
	while (array[j])
	{
		i = 0;
		while (array[j][i])
		{
			if (array[j][i] == c)
				array[j][i] = r;
			i++;
		}
		j++;
	}
	reset(piece, 2);
	return (NULL);
}

char	**backtracking(char **array, t_piece *piece, int len, char c)
{
	while (piece->y[SIZE - 1] + piece->coords[Y] < len)
	{
		if (check(array, piece, len) == 1)
		{
			print(array, piece, c);
			if (!piece->next)
				return (array);
			else if (c != 'A' && backtracking(array, piece->next, len, c + 1))
				return (array);
			else if (backtracking(array, piece->next, len, c + 1))
				return (array);
			print(array, piece, '.');
		}
		(piece->coords[X])++;
		if (check(array, piece, len) == -2)
		{
			reset(piece, X);
			(piece->coords[Y])++;
		}
	}
	if (c != 'A')
		return (replace_and_exit(array, piece, c, '.'));
	print(array, piece, '.');
	reset(piece, 2);
	return (backtracking(new_array(array, len + 1), piece, len + 1, c));
}
