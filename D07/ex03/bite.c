/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_contact_params.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 18:18:39 by estephan          #+#    #+#             */
/*   Updated: 2016/08/17 18:20:05 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		nbrcara;
	char	*str;
	int		d;

	i = 1;
	j = 0;
	d = 0;
	nbrcara = 0;
	while (i < argc)
	{
		while (argv[i][j++] != '\0')
		nbrcara += j;
		j = 0;
		i++;
	}
	i = 1;
	str = (char*)malloc(sizeof(char) * (nbrcara));
	while (i < argc)
	{
		while (argv[i][j] != '\0')
			str[d++] = argv[i][j++];
		j = 0;
		str[d++] = '\n';
		i++;
	}
	str[--d] = '\0';
	return (str);
}

int		main(int argc, char **argv)
{
	printf("%s", ft_concat_params(argc, argv));
	return (0);
}
