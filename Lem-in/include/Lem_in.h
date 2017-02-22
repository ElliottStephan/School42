/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Lem_in.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/06 14:15:08 by estephan          #+#    #+#             */
/*   Updated: 2017/02/21 16:44:03 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEM_IN_H
# define LEM_IN_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>

# define INT_MAX 2147483647
# define INT_MIN -2147483648
# define IS_INT(V) V >= INT_MIN && V <= INT_MAX
# define BUFF_SIZE 4

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

int					ft_error1(void);
int					ft_error2(void);
int					ft_error3(void);
int					ft_error4(void);

int					ft_is_room(char *s);
int					ft_is_link(char *s, t_plst *anthill);
int					ft_name_ok(char *s, t_plst *anthill);

int					ft_add_links(char *s, t_plst *anthill);
int					ft_add_links2(char *s, t_plst *anthill);

t_plst				*ft_pslstnew(void);
t_plst				*ft_list_append(t_plst *list, char *s);
void				ft_name_room(t_plst *anthill, int info, char *s);

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
char				*ft_strjoin(char const *s1, char const *s2);
char				**ft_strsplit(const char *str, char c);

int					ft_parse1(int nb_ants, char *s, t_plst *anthill);
int					ft_parse2(char *s, t_plst *anthill);
int					ft_parse3(char *s, t_plst *anthill);
int					get_next_line(const int fd, char **line);

#endif
