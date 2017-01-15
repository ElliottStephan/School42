/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 12:18:52 by estephan          #+#    #+#             */
/*   Updated: 2017/01/15 17:48:40 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*
** Just write Error when everything is OK
*/

int			ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
	return (0);
}
