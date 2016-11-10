/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 11:13:42 by estephan          #+#    #+#             */
/*   Updated: 2016/11/10 13:17:15 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_fraiche0(void)
{
	char	*ret;

	ret = malloc(sizeof(char) * 1);
	if (ret == NULL)
		return (NULL);
	ret[0] = '\0';
	return (ret);
}

char	*ft_fraiche1(int k, int i, char *fraiche, char const *s)
{
	int	l;
	int j;

	l = 0;
	j = ft_strlen(s) - i - k;
	while (l < j)
	{
		fraiche[l] = s[i];
		l++;
		i++;
	}
	fraiche[l] = '\0';
	return (fraiche);
}

char	*ft_strtrim(char const *s)
{
	char	*fraiche;
	int		i;
	int		k;
	int		j;

	i = 0;
	k = 0;
	j = 0;
	if (!s)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	while (s[j])
		j++;
	j--;
	while (s[j] == ' ' || s[j] == '\t' || s[j] == '\n')
	{
		j--;
		k++;
	}
	if (s[i] == '\0')
		return (ft_fraiche0());
	if (!(fraiche = malloc(sizeof(char) * (ft_strlen(s) - i - k + 1))))
		return (NULL);
	return (ft_fraiche1(k, i, fraiche, s));
}
