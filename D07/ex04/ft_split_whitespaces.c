/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 11:04:37 by estephan          #+#    #+#             */
/*   Updated: 2016/08/18 14:03:39 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int		countword(char *str, int word)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '	' || str[i] == '\n')
			i++;
		else
		{
			word++;
			while (str[i] != ' ' || str[i] != '	' || str[i] != '\n')
				i++;
		}
	}
	return (word);
}




char **ft_split_whitespaces(char *str)
{
	int word;
	int i;
	int omg;
	char **tab;
	int b;
	int c;

	word = 0;
	omg = 100;
	b = 0;
	c = 0;
	i = 0;
	word =(countword(str, word));
	tab = (char **)(malloc(sizeof(char *) * word));
	while (i < word)
	{
		tab[i] = (char *)(malloc(sizeof(char) * omg));
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == ' ' || str[i] == '\n')
			i++;
		else
		{			
			while (str[i] != ' ' || str[i] != ' ' || str[i] != '\n' || str[i] != '\0')
				tab[b][c] = str[i];
			i++;
			c++;
		}
		tab[b][c] = '\0';
		b++;
	}
	return (tab);
}

int		main(void)
{
	int     a;
	int		i;
	char **tab;

	a = 0;
	i = 0;
	tab = (ft_split_whitespaces("Je mange des coco"));
	while (tab[a][i] != '\0')
	{
		i = 0;
		while(tab[a][i] != '\0')
		{		
			ft_putchar(tab[a][i]);
			i++;
		}
		a++;
	}
}
