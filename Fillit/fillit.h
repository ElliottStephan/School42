/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 12:14:22 by pribault          #+#    #+#             */
/*   Updated: 2016/11/18 13:59:31 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

/*
**   libraries
*/

# include "libft.h"
# include <fcntl.h>
# include <unistd.h>

/*
**   macros
*/

# define SIZE 4
# define X 1
# define Y 0

/*
**   structures
*/

typedef struct		s_piece
{
	int				coords[2];
	int				x[SIZE];
	int				y[SIZE];
	struct s_piece	*next;
}					t_piece;

/*
**   prototypes
*/

void				del_all_pieces(t_piece *head);
void				*del_and_exit(t_piece *head);
int					del_and_exit2(t_piece *head);
t_piece				*new_piece(char *str);
int					check_pieces_around(t_piece *piece);
int					check_piece(char *str);
t_piece				*check_and_build(int fd);
int					alloc_array(char **array, int n);
int					check(char **array, t_piece *piece, int len);
int					smallest_square(t_piece *head);
int					ft_lstlen(t_piece *head);
char				**backtracking(char **array, t_piece *piece, int l, char c);

#endif
