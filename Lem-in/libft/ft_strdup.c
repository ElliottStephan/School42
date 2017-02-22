/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 14:15:22 by estephan          #+#    #+#             */
/*   Updated: 2016/11/05 18:33:12 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

char	*ft_strdup(char *src)
{
	char	*dupli;
	int		i;

	i = 0;
	while (src[i])
		i++;
	dupli = (char*)malloc(sizeof(*dupli) * (i + 1));
	if (dupli == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dupli[i] = src[i];
		i++;
	}
	dupli[i] = '\0';
	return (dupli);
}
