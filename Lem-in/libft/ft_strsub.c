/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 10:43:49 by estephan          #+#    #+#             */
/*   Updated: 2016/11/10 12:25:23 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*fraiche;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	fraiche = malloc(sizeof(char) * (len + 1));
	if (fraiche == NULL)
		return (NULL);
	while (i < len)
	{
		fraiche[i] = (char)s[start];
		start++;
		i++;
	}
	fraiche[i] = '\0';
	return (fraiche);
}
