/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 18:48:57 by estephan          #+#    #+#             */
/*   Updated: 2016/11/10 12:23:11 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*fraiche;
	unsigned int	i;
	int				j;

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
			fraiche[i] = f(i, (char)s[i]);
			i++;
		}
		fraiche[i] = '\0';
		return (fraiche);
	}
	return (NULL);
}
