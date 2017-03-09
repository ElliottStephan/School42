/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/07 16:41:25 by estephan          #+#    #+#             */
/*   Updated: 2017/03/07 17:30:50 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_tabdel(char **as)
{
	int		a;

	a = 0;
	while (as[a])
	{
		ft_strdel(&as[a]);
		a++;
	}
	free(as);
}