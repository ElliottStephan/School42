/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 12:57:59 by estephan          #+#    #+#             */
/*   Updated: 2016/11/07 14:40:06 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, void *src, int c, size_t n)
{
	size_t	b;
	char	*pdes;
	char	*ps;

	b = 0;
	pdes = dest;
	ps = src;
	while (b != n && ps[b])
	{
		pdes[b] = ps[b];
		if (pdes[b] == c)
			return (&pdes[b + 1]);
		b++;
	}
	return (NULL);
}
