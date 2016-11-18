/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 14:31:23 by pribault          #+#    #+#             */
/*   Updated: 2016/11/07 14:35:05 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	i;
	int		min;

	i = 1;
	min = 0;
	if (n < 0)
	{
		if (n == -2147483648)
			min = 1;
		n = -n - min;
		ft_putchar_fd('-', fd);
	}
	while (i * 10 <= n)
		i *= 10;
	while (i >= 1)
	{
		ft_putchar_fd(48 + n / i, fd);
		n = n - (n / i) * i;
		i /= 10;
		if (i == 1 && min == 1)
			n++;
	}
}
