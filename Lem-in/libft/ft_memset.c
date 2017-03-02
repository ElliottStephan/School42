/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 10:42:28 by estephan          #+#    #+#             */
/*   Updated: 2016/11/07 12:30:33 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*ps;
	size_t	i;

	i = 0;
	ps = s;
	while (i != n)
	{
		ps[i] = (unsigned char)c;
		i++;
	}
	return (s);
}