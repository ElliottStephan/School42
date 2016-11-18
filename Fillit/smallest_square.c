/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smallest_square.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 00:35:43 by pribault          #+#    #+#             */
/*   Updated: 2016/11/17 09:07:10 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		root(int n)
{
	int		i;

	i = 0;
	while (i * i < n)
		i++;
	return (i);
}

int		alloc_array(char **array, int n)
{
	int		i;

	i = 0;
	while (i < n)
	{
		array[i] = (char*)malloc(sizeof(char) * (n + 1));
		if (!array[i])
			return (0);
		ft_memset(array[i], '.', n);
		array[i][n] = '\0';
		i++;
	}
	array[i] = 0;
	return (1);
}

void	free_array(char **array, int n)
{
	int		i;

	i = 0;
	while (i <= n)
		free(array[i++]);
	free(array);
}

int		smallest_square(t_piece *head)
{
	char	**array;

	array = (char**)malloc(sizeof(char*) * (root(SIZE * ft_lstlen(head)) + 1));
	if (!array)
		return (del_and_exit2(head));
	if (!alloc_array(array, root(SIZE * ft_lstlen(head))))
		return (del_and_exit2(head));
	array = backtracking(array, head, root(SIZE * ft_lstlen(head)), 'A');
	ft_showtab(array);
	free_array(array, ft_strlen(array[0]));
	return (del_and_exit2(head));
}
