/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 11:41:52 by estephan          #+#    #+#             */
/*   Updated: 2016/11/10 15:27:01 by estephan         ###   ########.fr       */
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
	while (b != n && ps[b])
	{
		pdes[b] = ps[b];
		b++;
	}
	if (b != 0)
		pdes[b] = '\0';
	return (dest);
}
