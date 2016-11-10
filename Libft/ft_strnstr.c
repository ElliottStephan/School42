/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 18:34:22 by estephan          #+#    #+#             */
/*   Updated: 2016/11/06 16:20:33 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *phrase, char *mot, int n)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	if (mot[0] == '\0')
		return (phrase);
	while (phrase[i] != '\0')
	{
		j = i;
		k = 0;
		while (phrase[j] == mot[k] && j < n)
		{
			j++;
			k++;
			if (mot[k] == '\0')
				return (&phrase[i]);
		}
		i++;
	}
	return (NULL);
}
