/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nb_ants.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/06 13:08:36 by estephan          #+#    #+#             */
/*   Updated: 2017/03/02 16:21:30 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/lem_in.h"

int			ft_isint(char *s)
{
	long	v;

	v = ft_atoi(s);
	return (IS_INT(v) ? v : ft_error2());
}

int			ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int			ft_strisdigit(char *s)
{
	if (*s == '-')
		s++;
	while (*s)
	{
		if (!(ft_isdigit(*s)))
			return (0);
		s++;
	}
	return (1);
}

int			ft_check(char *s)
{
	return (ft_strisdigit(s) ? ft_isint(s) : ft_error1());
}

int			ft_nb_ants(char *s)
{
	int		v;

	v = 0;
	v = ft_check(s);
	return (v);
}
