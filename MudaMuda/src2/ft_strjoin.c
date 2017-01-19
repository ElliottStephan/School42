/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 17:03:35 by estephan          #+#    #+#             */
/*   Updated: 2017/01/17 19:52:40 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include2/checker.h"

int				ft_s(const char *s)
{
	return (ft_strlen(s));
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	char		*fraiche;
	int			i;
	int			f;

	i = 0;
	f = 0;
	if (!s1 || !s2)
		return (NULL);
	if (!(fraiche = malloc(sizeof(char) * (ft_s(s1) + ft_s(s2) + 1))))
		return (NULL);
	while (s1[i])
	{
		fraiche[f] = s1[i];
		f++;
		i++;
	}
	i = 0;
	while (s2[i])
	{
		fraiche[f] = s2[i];
		f++;
		i++;
	}
	fraiche[f] = '\0';
	return (fraiche);
}

char			*ft_strdup(char *src)
{
	char		*dupli;
	int			i;

	i = 0;
	while (src[i])
		i++;
	dupli = (char*)malloc(sizeof(*dupli) * (i + 1));
	if (dupli == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dupli[i] = src[i];
		i++;
	}
	dupli[i] = '\0';
	return (dupli);
}

size_t			ft_strlen(const char *str)
{
	size_t		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
