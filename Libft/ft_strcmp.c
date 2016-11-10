/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 14:01:15 by estephan          #+#    #+#             */
/*   Updated: 2016/11/09 10:31:37 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
