/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 13:39:08 by estephan          #+#    #+#             */
/*   Updated: 2016/11/16 11:56:55 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	result;
	size_t	j;

	i = 0;
	j = 0;
	result = (ft_strlen(dst) + ft_strlen((char *)src));
	while (dst[i] != 0 && i < size)
		i++;
	if ((size - i) == 0)
		return (i + ft_strlen((char *)src));
	while (i != (size - 1) && src[j] != 0)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = 0;
	return (result);
}
