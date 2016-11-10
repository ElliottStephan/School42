/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 13:55:30 by estephan          #+#    #+#             */
/*   Updated: 2016/11/10 15:27:19 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# define BUFF_SIZE 4096

int     ft_strlen(const char *str);
int     ft_strlcat(char *dest, char *src, int s);
char    *ft_strcat(char *dest, char *src);
int     ft_strcmp(const char *s1, const char *s2);
char    *ft_strdup(char *src);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
char    *ft_strnstr(char *phrase, char *mot, int n);
char    *ft_strchr(char *s, int c);
char    *ft_strcpy(char *dest, char *src);
char    *ft_strncat(char *dest, char *src, int nb);
char    *ft_strncpy(char *dest, char *src, unsigned int n);
char    *ft_strrchr(char *s, int c);
int     ft_atoi(const char *str);
int     ft_isdigit(int i);
int     ft_isalpha(int i);
int		ft_isalnum(int i);
int     ft_isascii(int i);
int     ft_isprint(int i);
int     ft_toupper(int c);
int     ft_tolower(int c);
void    *ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memccpy(void *dest, void *src, int c, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_memalloc(size_t size);
void    ft_memdel(void **ap);
char    *ft_strnew(size_t size);
char    *ft_strnew(size_t size);
void    ft_strclr(char *s);
void    ft_striter(char *s, void (*f)(char *));
void    ft_striteri(char *s, void (*f)(unsigned int, char *));
char    *ft_strmap(char const *s, char (*f)(char));
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
int     ft_strequ(char const *s1, char const *s2);
int     ft_strnequ(char const *s1, char const *s2, size_t n);
char    *ft_strsub(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(char const *s);
char    **ft_strsplit(char const *s, char c);
void    ft_putchar(char c);
void    ft_putstr(char const *s);
void    ft_putendl(char const *s);
void    ft_putnbr(int nb);
void    ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char const *s, int fd);
void    ft_putendl_fd(char const *s, int fd);
void    ft_putnbr_fd(int nb, int fd);
char    *ft_itoa(int n);
#endif
