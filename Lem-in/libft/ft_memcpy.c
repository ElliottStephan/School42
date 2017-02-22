/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 11:41:52 by estephan          #+#    #+#             */
/*   Updated: 2016/11/15 13:14:18 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	b;
	char	*pdes;
	char	*ps;

	b = 0;
	pdes = dest;
	ps = (char*)src;
	while (b != n)
	{
		pdes[b] = ps[b];
		b++;
	}
	return (dest);
}
