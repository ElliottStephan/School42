/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 15:19:49 by estephan          #+#    #+#             */
/*   Updated: 2016/11/10 12:10:09 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *zonemem;

	zonemem = malloc(size);
	if (zonemem == NULL)
		return (NULL);
	ft_memset(zonemem, 0, size);
	return (zonemem);
}
