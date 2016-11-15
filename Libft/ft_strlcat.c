/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 13:39:08 by estephan          #+#    #+#             */
/*   Updated: 2016/11/07 12:34:25 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlcat(char *dest, char *src, int s)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	while (dest[i] && i < s)
		i++;
	k = i;
	while (src[j] && i < s - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (k < s)
		dest[i] = '\0';
	return (k + ft_strlen(src));
}
