/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 14:45:05 by estephan          #+#    #+#             */
/*   Updated: 2016/11/10 12:10:52 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ps1;
	unsigned char	*ps2;
	size_t			t;

	t = 0;
	ps1 = (unsigned char*)s1;
	ps2 = (unsigned char*)s2;
	while (t < n)
	{
		if (ps1[t] != ps2[t])
			return (ps1[t] - ps2[t]);
		t++;
	}
	return (0);
}
