/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 15:43:20 by estephan          #+#    #+#             */
/*   Updated: 2017/01/18 17:54:39 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>

# define INT_MAX 2147483647
# define INT_MIN -2147483648
# define IS_INT(V) V >= INT_MIN && V <= INT_MAX
# define DP 2

# define BUFF_SIZE 1

typedef struct		s_node
{
	int				v;
	struct s_node	*next;
}					t_node;

typedef struct		s_pslist
{
	int				len;
	t_node			*head;
	t_node			*tail;
}					t_plst;

int					get_next_line(const int fd, char **line);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strdup(char *src);
size_t				ft_strlen(const char *str);
int					ft_s(const char *s);
void				ft_swaper(t_plst *l);
void				ft_pusher(t_plst *la, t_plst *lb);
void				ft_rotater(t_plst *l);
void				ft_revrotater(t_plst *l);
int					ft_isunique(t_plst *list, int v);
int					ft_isint(t_plst *list, char *av);
int					ft_check(t_plst *list, char *av);
int					ft_checkbonus(char **av, int *bonus);
t_plst				*ft_parsing(int ac, char **av, int *bonus);
int					ft_error(void);
int					ft_parser(char *s, t_plst *la, t_plst *lb);
int					ft_parser_part2(char *s, t_plst *la, t_plst *lb);

t_plst				*ft_pslstnew(void);
t_plst				*ft_lstappend(t_plst *list, int v);
void				ft_lstdellastone(t_plst *l);
void				ft_lstdelallnodes(t_plst *l);
void				ft_lstclear(t_plst *l);
int					ft_isdigit(int c);
int					ft_strisdigit(char *s);
long				ft_atoi(const char *str);
int					ft_isascending(int a, int b);
int					ft_isdescending(int a, int b);
int					ft_issortasc(t_plst *l);
int					ft_issortdes(t_plst *l);
int					ft_error(void);
long				ft_power(int nb, int exp);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strnew(size_t size);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
void				*ft_memset(void *s, int c, size_t n);

#endif
