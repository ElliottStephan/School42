/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 11:03:47 by estephan          #+#    #+#             */
/*   Updated: 2016/11/10 13:28:39 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_s(const char *s)
{
	return (ft_strlen(s));
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fraiche;
	int		i;
	int		f;

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
