/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/04 14:19:32 by estephan          #+#    #+#             */
/*   Updated: 2017/02/22 14:13:59 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/lem_in.h"

void		ft_build_anthill(int nb_ants, t_plst *anthill)
{
	char	*s;

	while (get_next_line(0, &s) ==1)
	{
		ft_parse1(nb_ants, s, anthill);
		free (s);
	}
}

int			ft_parse1(int nb_ants, char *s, t_plst *anthill)
{
	static int		i = 0;

	if (i == 0)
	{
		if(ft_strisdigit(s))
		{
			nb_ants = ft_nb_ants(s);
			i++;
			return (1);
		}
		return (0);
	}
	else
		ft_parse2(s, anthill);
	return (0);
}

int		ft_parse2(char *s, t_plst *anthill)
{
	static int		i = 0;
	static int		info = 0;

	if (i == 0)
	{
		if (ft_is_here(s, ' ') || ft_is_here(s, '#'))
		{
			if (ft_is_comment(s))
				return (0);
			if (ft_is_info(s))
			{
				info = ft_end_or_start(s);
				return (1);
			}
			if (ft_is_room(s))
			{
				ft_name_room(anthill, info, s);
			}
			else
				ft_error3();
		}
		if (ft_is_here(s, '-'))
			i++;
	}
	if (i == 1)
		ft_parse3(s, anthill);
	return (0);
}

int		ft_parse3(char *s, t_plst *anthill)
{
	if (ft_is_here(s, '-') || ft_is_here(s, '#'))
	{
		if (ft_is_comment(s))
			return (0);
		if (ft_is_link(s, anthill))
		{
			ft_add_links(s, anthill);
			ft_add_links2(s, anthill);
		}
	}
	else
		ft_error4();
	return (0);
}
