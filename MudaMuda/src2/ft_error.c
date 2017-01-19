/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 12:18:52 by estephan          #+#    #+#             */
/*   Updated: 2017/01/17 17:57:11 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include2/checker.h"

/*
** Just write Error when everything is OK
*/

int			ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
	return (0);
}
