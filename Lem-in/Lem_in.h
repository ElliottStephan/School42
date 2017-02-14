/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Lem_in.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/06 14:15:08 by estephan          #+#    #+#             */
/*   Updated: 2017/02/10 17:11:23 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>

# define INT_MAX 2147483647
# define INT_MIN -2147483648
# define IS_INT(V) V >= INT_MIN && V <= INT_MAX

typedef struct		s_node
{
	int				ants;
	int				p;
	int				type;
	char			*name;
	char			*link;
	struct s_node	*next;
}					t_node;

typedef struct		s_pslist
{
	int				len;
	t_node			*head;
	t_node			*tail;
}					t_plst;
