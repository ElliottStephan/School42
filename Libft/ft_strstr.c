/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 18:50:56 by estephan          #+#    #+#             */
/*   Updated: 2016/11/06 16:21:00 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *phrase, const char *mot)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	if (mot[0] == '\0')
		return (char*)(phrase);
	while (phrase[i] != '\0')
	{
		j = i;
		k = 0;
		while (phrase[j] == mot[k])
		{
			j++;
			k++;
			if (mot[k] == '\0')
				return (char*)(&phrase[i]);
		}
		i++;
	}
	return (NULL);
}
