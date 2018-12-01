/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnarbert <mnarbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 18:24:51 by mnarbert          #+#    #+#             */
/*   Updated: 2018/12/01 15:11:58 by mnarbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct	s_list
{
	void				*content;
	size_t				size;
	size_t				fd;
	struct s_list		*next;
}				t_list;

int				ft_atoi(const char *str);
char			*ft_itoa(int n);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
int				ft_tolower(int c);
int				ft_toupper(int c);
void			ft_bzero(void *s, size_t n);
void			*ft_memalloc(size_t size);
void			ft_memdel(void **ap);
void			*ft_memccpy(void *dest, const void *src, int c, size_t count);
void			*ft_memchr (const void *arr, int c, size_t n);
int				ft_memcmp (const void *arr1, const void *arr2, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t count);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memset(void *dest, int c, size_t n);
char			*ft_strcat(char *dest, char *src);
char			*ft_strrchr(const char *str, int symbol);
int				ft_strcmp(char *s1, char *s2);
char			*ft_strcpy(char *dest, char *src);
char			*ft_strdup(char *src);
size_t			ft_strlcat(char *dest, char *src, size_t size);
size_t			ft_strlen(const char *str);
char			*ft_strncat(char *dest, char *src, int nb);
int				ft_strncmp(char *s1, char *s2, size_t n);
char			*ft_strncpy(char *dest, char *src, unsigned int n);
char			*ft_strnstr(char *src, char *to_find, size_t len);
char			*ft_strchr(const char *str, int symbol);
char			*ft_strstr(char *src, char *to_find);
char			*ft_strjoin(char const *s1, char const *s2);
int				ft_strequ(char const *s1, char const *s2);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			**ft_strsplit(char const *s, char c);
void			ft_strdel(char **as);
char			*ft_strnew(size_t size);
void			ft_strclr(char *s);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_strtrim(char const *s);
void			ft_putchar(char c);
void			ft_putnbr(int nb);
void			ft_putstr(const char *str);
void			ft_putendl(char const *s);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char const *s, int fd);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putnbr_fd(int n, int fd);
t_list			*ft_lstnew(void const *content, size_t size, int fd);
void			ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstadd(t_list **alst, t_list *new);
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void			ft_lstclear(t_list **list);
#endif
