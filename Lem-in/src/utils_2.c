/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/17 14:08:41 by estephan          #+#    #+#             */
/*   Updated: 2017/03/02 17:09:29 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/lem_in.h"

int				ft_s(const char *s)
{
	int			i;

	i = 0;
	if (s)
	{
		while (s[i] != '\0')
			i++;
	}
	return (i);
}

char			*ft_strjoin2(char const *s1, char const *s2)
{
	char		*fraiche;
	int			i;
	int			f;

	i = -1;
	f = 0;
	if (!s2)
		return (NULL);
	if (!(fraiche = malloc(sizeof(char) * (ft_s(s1) + ft_s(s2) + 2))))
		return (NULL);
	return (ft_get_fraiche(s1, s2, fraiche, i));
}

char			*ft_get_fraiche(const char *s1, const char *s2, char *fr, int i)
{
	int			f;

	f = 0;
	if (s1)
	{
		while (s1[++i])
		{
			fr[f] = s1[i];
			f++;
		}
	}
	i = 0;
	if (f != 0)
	{
		fr[f] = '-';
		f++;
	}
	while (s2[i])
	{
		fr[f] = s2[i];
		f++;
		i++;
	}
	fr[f] = '\0';
	return (fr);
}

int				ft_atoi(const char *str)
{
	int			sign;
	int			res;

	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'
			|| *str == '\r' || *str == '\f')
		str++;
	res = 0;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		sign = (*str == '-' ? -1 : 1);
		str++;
	}
	while (ft_isdigit(*str))
	{
		res = (res * 10) + (*str - '0');
		str++;
	}
	return (res * sign);
}
