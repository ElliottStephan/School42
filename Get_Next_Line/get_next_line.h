/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 16:11:31 by estephan          #+#    #+#             */
/*   Updated: 2016/11/25 18:20:08 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "Libft/libft.h"
# include <unistd.h>
# include <string.h>
# include <stdlib.h>

# define BUFF_SIZE 4

int		get_next_line(const int fd, char **line);

#endif
