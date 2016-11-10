/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 14:30:20 by estephan          #+#    #+#             */
/*   Updated: 2016/11/08 14:44:16 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	b;
	char	*ps;

	b = 0;
	ps = (char*)s;
	while (b != n && ps[b])
	{
		if (ps[b] == c)
			return (&ps[b]);
		b++;
	}
	if (ps[b] == c)
		return (&ps[b]);
	return (NULL);
}
