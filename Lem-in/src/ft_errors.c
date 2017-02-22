/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/06 13:25:41 by estephan          #+#    #+#             */
/*   Updated: 2017/02/21 14:29:26 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/lem_in.h"

int		ft_error1(void)
{
	write(1, "Error : Issue with ants number\n", 31);
	exit(1);
	return (0);
}

int		ft_error2(void)
{
	write(1, "Error : Too much ants !\n", 24);
	exit(1);
	return (0);
}

int		ft_error3(void)
{
	write(1, "Error : Issue with room\n", 24);
	exit(1);
	return (0);
}

int		ft_error4(void)
{
	write(1, "Error : Issue with link\n", 24);
	exit(1);
	return (0);
}
