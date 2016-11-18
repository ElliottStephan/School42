/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 12:13:30 by pribault          #+#    #+#             */
/*   Updated: 2016/11/17 06:49:14 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_exit(char *str)
{
	ft_putendl(str);
	return (0);
}

int		main(int argc, char **argv)
{
	t_piece	*pieces;
	int		fd;

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd)
		{
			pieces = check_and_build(fd);
			if (pieces)
				return (smallest_square(pieces));
			else
				return (ft_exit("error"));
			close(fd);
		}
		else
			return (ft_exit("error"));
	}
	else
		return (ft_exit("error"));
	return (0);
}
