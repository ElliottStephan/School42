/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 18:50:56 by estephan          #+#    #+#             */
/*   Updated: 2016/11/04 19:17:20 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strstr(const char *phrase, const char *mot)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	if (to_find[0] == '\0')
		return (char*)(phrase);
	while (str[i] != '\0')
	{
		j = i;
		k = 0;
		while (str[j] == phrase[k])
		{
			j++;
			k++;
			if (phrase[k] == '\0')
				return (char*)(&str[i]);
		}
		i++;
	}
	return (NULL);
}
