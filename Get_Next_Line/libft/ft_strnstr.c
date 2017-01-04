/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 18:34:22 by estephan          #+#    #+#             */
/*   Updated: 2016/11/15 11:54:27 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *phrase, const char *mot, size_t n)
{
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	k = 0;
	if (mot[0] == '\0')
		return ((char*)phrase);
	while (phrase[i] != '\0')
	{
		j = i;
		k = 0;
		while (phrase[j] == mot[k] && j < n)
		{
			j++;
			k++;
			if (mot[k] == '\0')
				return ((char *)&phrase[i]);
		}
		i++;
	}
	return (NULL);
}
