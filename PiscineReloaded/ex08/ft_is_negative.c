/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 15:26:53 by estephan          #+#    #+#             */
/*   Updated: 2016/11/02 15:35:48 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	int b;

	b = 'P';
	if (n < 0)
	{
		b = 'N';
		ft_putchar(b);
	}
	else
	{
		ft_putchar(b);
	}
}
