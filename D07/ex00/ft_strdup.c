/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 10:06:36 by estephan          #+#    #+#             */
/*   Updated: 2016/08/16 13:07:08 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		srctaille;
	char	*strbis;

	i = 0;
	srctaille = 0;
	while (src[srctaille])
		srctaille++;
	strbis = (char*)malloc(sizeof(*strbis) * (srctaille));
	if (strbis* == 0)
		return (0);
	while (i < srctaille)
	{
		strbis[i] = src[i];
		i++;
	}
	strbis[srctaille] = '\0';
	return (strbis);
}
