/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 14:12:50 by jlasne            #+#    #+#             */
/*   Updated: 2017/01/17 20:58:55 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include2/checker.h"

/*int					ft_strcmp1(const char *s1, const char *s2)
{
	int				i;
	unsigned char	*c_s1;
	unsigned char	*c_s2;

	i = 0;
	c_s1 = (unsigned char *)s1;
	c_s2 = (unsigned char *)s2;
	while (c_s1[i] != '\0' && c_s2[i] != '\0' && c_s1[i] == c_s2[i])
		i++;
	return (c_s1[i] - c_s2[i]);
}*/

char				*ft_strnew(size_t size)
{
	char			*str;

	str = (char *)malloc(sizeof(char) * (size + 1));
	if (str)
		return (ft_memset(str, 0, size + 1));
	return (NULL);
}

char				*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*str;
	size_t			i;

	if (!s || !(str = ft_strnew(len)))
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

void				*ft_memset(void *s, int c, size_t n)
{
	unsigned char *ret;

	ret = (unsigned char *)s;
	if (n == 0)
		return (s);
	while (n > 0)
	{
		n--;
		ret[n] = (unsigned char)c;
	}
	s = (void *)ret;
	return (s);
}
