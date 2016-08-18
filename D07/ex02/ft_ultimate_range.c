/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 18:10:27 by estephan          #+#    #+#             */
/*   Updated: 2016/08/17 16:40:00 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*everyint;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	everyint = (int*)malloc(sizeof(int) * (max - min));
	if (everyint == NULL)
		return (0);
	while (min < max)
	{
		everyint[i] = min;
		i++;
		min++;
	}
	range* = everyint;
	return (i);
}

