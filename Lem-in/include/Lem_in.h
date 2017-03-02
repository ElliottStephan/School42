/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Lem_in.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/06 14:15:08 by estephan          #+#    #+#             */
/*   Updated: 2017/03/02 17:22:06 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEM_IN_H
# define LEM_IN_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>
# include "libft.h"

# define INT_MAX 2147483647
# define INT_MIN -2147483648
# define IS_INT(V) V >= INT_MIN && V <= INT_MAX
# define BUFF_SIZEE 4

typedef struct		s_node
{
	int				ants;
	int				pos;
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

int					ft_error1(void);
int					ft_error2(void);
int					ft_error3(void);
int					ft_error4(void);

int					ft_is_room(char *s);
int					ft_is_link(char *s, t_plst *anthill);
int					ft_name_ok(char *s, t_plst *anthill);
void				ft_build_anthill(int *nb_ants, t_plst *anthill);

int					ft_add_links(char *s, t_plst *anthill);
int					ft_add_links2(char *s, t_plst *anthill);
int					ft_add_info(t_plst *anthill, char *s, int info);

t_plst				*ft_pslstnew(void);
t_plst				*ft_list_append(t_plst *list, char *s);
int					ft_name_room(t_plst *anthill, int info, char *s);

int					ft_isint(char *s);
int					ft_isdigit(int c);
int					ft_strisdigit(char *s);
int					ft_check(char *s);
int					ft_nb_ants(char *s);

int					ft_is_here(char *s, char c);
int					ft_is_comment(char *s);
int					ft_is_info(char *s);
int					ft_end_or_start(char *s);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_s(const char *s);
int					ft_atoi(const char *str);
char				*ft_strjoin2(char const *s1, char const *s2);

int					ft_parse1(int *nb_ants, char *s, t_plst *anthill);
int					ft_parse2(char *s, t_plst *anthill);
int					ft_parse3(char *s, t_plst *anthill);
int					get_next_line(const int fd, char **line);

int					ft_add_pos(t_plst *anthill);
int					ft_add_pos2(t_plst *anthill, t_node *tmp);
t_node				*ft_this_node(t_plst *anthill, char *s);
int					ft_parse2_2(int *info, char *s, t_plst *anthill);
char				*ft_get_fraiche(const char *s1, const char *s2,
char *fr, int i);
#endif
