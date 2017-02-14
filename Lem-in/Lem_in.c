/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Lem_in.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/04 14:05:33 by estephan          #+#    #+#             */
/*   Updated: 2017/02/08 11:23:40 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/lem_in.h"

int			main(int ac, char **av)
{
	int		nb_ants;
	t_plst	*anthill;

	nb_ants = 0;
	anthill = ft_pslstnew();
	ft_build_anthill(&nb_ants,anthill);
}
