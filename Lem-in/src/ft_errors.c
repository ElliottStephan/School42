/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/06 13:25:41 by estephan          #+#    #+#             */
/*   Updated: 2017/03/02 16:18:11 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/lem_in.h"

int		ft_error1(void)
{
	write(1, "Error : Insert an INT\n", 22);
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

int		ft_error5(void)
{
	write(1, "Error : IMPOSSIBLE\n", 19);
	exit(1);
	return (0);
}
