/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 16:07:35 by estephan          #+#    #+#             */
/*   Updated: 2016/11/25 01:24:43 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		read_in(int const fd, char **buff)
{
	char	read_buff[BUFF_SIZE + 1];
	char	*str;
	int		lu;

	str = NULL;
	while ((!ft_strchr(*buff, '\n')))
	{
		if ((lu = read(fd, read_buff, BUFF_SIZE)) <= 0)
			return (lu);
		str = *buff;
		read_buff[lu] = '\0';
		if (!(*buff = ft_strjoin(*buff, read_buff)))
			return (-1);
		ft_strdel(&str);
		if (lu < BUFF_SIZE)
			return (lu);
	}
	return (lu);
}

char	*put_in_line(char *buff, char **line)
{
	char	*tmp;
	char	*str;

	if (buff && (tmp = ft_strchr(buff, '\n')))
	{
		str = buff;
		*line = ft_strsub(buff, 0, ft_strlen(buff) - ft_strlen(tmp));
		buff = ft_strdup(tmp + 1);
		ft_strdel(&str);
	}
	else
	{
		*line = ft_strdup(buff);
		ft_strdel(&buff);
	}
	return (buff);
}

int		get_next_line(const int fd, char **line)
{
	static char	*buff = NULL;
	char		*stock;
	int			ret;

	if (fd < 0)
		return (-1);
	if (!buff)
		buff = ft_strnew(0);
	if ((ret = read_in(fd, &buff)) == -1)
		return (-1);
	stock = ft_strdup(buff);
	buff = put_in_line(buff, line);
	if ((!ret && stock[0] == '\0' && !ft_strlen(*line)))
	{
		ft_strdel(&stock);
		return (0);
	}
	ft_strdel(&stock);
	return (1);
}
