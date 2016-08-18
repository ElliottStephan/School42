/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 13:08:16 by estephan          #+#    #+#             */
/*   Updated: 2016/08/16 15:06:44 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_range(int min, int max)
{
	int i;
	int *naze;
	int *bon;
	int g;

	naze = NULL;
	g = 0;
	i = (max - min);
	if (i <= 0)
		return (naze);
	bon = (int *)malloc(sizeof(int) * i);
	while (g < i)
	{
		bon[g] = min;
		min++;
		g++;
	}
	bon[g] = '\0';
	return (bon);
}
