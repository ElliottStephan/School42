/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 11:23:53 by estephan          #+#    #+#             */
/*   Updated: 2017/02/21 16:30:21 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/lem_in.h"

int		ft_is_here(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (1);
		s++;
	}
	if (*s == c)
		return (1);
	return (0);
}

int		ft_is_comment(char *s)
{
	if (!s)
		return (0);
	if (s[0] && s[1])
	{
		if (s[0] == '#' && s[1] != '#')
			return (1);
	}
	return (0);
}

int		ft_is_info(char *s)
{
	if (!s)
		return (0);
	if (s[0] && s[1])
	{
		if (s[0] == '#' && s[1] == '#')
			return (1);
	}
	return (0);
}

int		ft_end_or_start(char *s)
{
	if (!s)
		return (0);
	if (!ft_strcmp(s, "##start"))
		return (1);
	if (!ft_strcmp(s, "##end"))
		return (2);
	return (0);
}

int		ft_strcmp(const char *s1, const char *s2)
{
	while ((unsigned char)*s1 == (unsigned char)*s2)
	{
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
