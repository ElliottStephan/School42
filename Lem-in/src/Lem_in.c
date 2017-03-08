/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Lem_in.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/04 14:05:33 by estephan          #+#    #+#             */
/*   Updated: 2017/03/08 12:04:29 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/lem_in.h"

int			main(void)
{
	int		nb_ants;
	t_plst	*anthill;
	t_node	*tmp;

	nb_ants = 0;
	anthill = ft_pslstnew();
	ft_build_anthill(&nb_ants, anthill);
	ft_add_pos(anthill);
	tmp = anthill->head;
	while (tmp)
	{
		if (tmp->type == 1)
		{
			tmp->ants = nb_ants;
			tmp->fu = nb_ants;
		}
		printf("Type : \n");
		ft_putendl(ft_itoa(tmp->type));
		printf("Ants : \n");
		ft_putendl(ft_itoa(tmp->ants));
		printf("POS : \n");
		ft_putendl(ft_itoa(tmp->pos));
		printf("Name : \n");
		ft_putendl(tmp->name);
		printf("Link : \n");
		ft_putendl(tmp->link);
		printf("\n");
		tmp = tmp->next;
	}
	ft_bouge_tes_fourmis(anthill);
	ft_lstclear(anthill);
	return (0);
}
