/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 10:39:26 by estephan          #+#    #+#             */
/*   Updated: 2016/11/03 14:11:33 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	return ((s1[i] - '0') - (s2[i] - '0'));
}

void	ft_swap(char **argv1, char **argv2)
{
	char *tempo;

	tempo = *argv1;
	*argv1 = *argv2;
	*argv2 = tempo;
}

int		main(int argc, char **argv)
{
	int a;

	a = 1;
	while (a < argc - 1)
	{
		if (ft_strcmp(argv[a], argv[a + 1]) > 0)
		{
			ft_swap(&argv[a], &argv[a + 1]);
			a = 1;
		}
		else
			a++;
	}
	a = 1;
	while (a < argc)
	{
		ft_putstr(argv[a]);
		ft_putchar('\n');
		a++;
	}
	return (0);
}
