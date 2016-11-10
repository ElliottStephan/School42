/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 16:14:11 by estephan          #+#    #+#             */
/*   Updated: 2016/11/10 12:22:25 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*fraiche;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s && f)
	{
		j = ft_strlen((char *)s);
		fraiche = (char*)malloc((j + 1) * sizeof(char));
		if (fraiche == NULL)
			return (NULL);
		while (s[i])
		{
			fraiche[i] = f((char)s[i]);
			i++;
		}
		fraiche[i] = '\0';
		return (fraiche);
	}
	return (NULL);
}
