/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_contact_params.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 18:18:39 by estephan          #+#    #+#             */
/*   Updated: 2016/08/17 18:46:39 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_concat_params(int argc, char **argv)
{
	int		tab[4];
	char	*str;

	tab[0] = 1;
	tab[2] = 0;
	tab[3] = 0;
	while (tab[0] < argc)
	{
		tab[1] = 0;
		while (argv[tab[0]][tab[1]++] != '\0')
			tab[2] += tab[1];
		tab[0]++;
	}
	tab[0] = 1;
	str = (char*)malloc(sizeof(char) * (tab[2]));
	while (tab[0] < argc)
	{
		while (argv[tab[0]][tab[1]] != '\0')
			str[tab[3]++] = argv[tab[0]][tab[1]++];
		tab[1] = 0;
		str[tab[3]++] = '\n';
		tab[0]++;
	}
	str[--tab[3]] = '\0';
	return (str);
}
