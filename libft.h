/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfourni <thfourni@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:09:52 by thfourni          #+#    #+#             */
/*   Updated: 2023/05/03 17:39:06 by thfourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int		ft_atoi(char *str);
void	ft_bzero(char *s, int n);
void	*ft_calloc(int count, int size);
int		ft_isalnum(unsigned char c);
int		ft_isalpha(unsigned char c);
int		ft_isascii(unsigned char c);
int		ft_isdigit(unsigned char c);
int		ft_isprint(unsigned char c);
void	*ft_memchr(char *s, int c, unsigned int n);
int		ft_memcmp(unsigned char *s1, unsigned char *s2, unsigned int n);
void	*ft_memcpy(void *dest, void *src, int n);
void	*ft_memmove(void *dest, void *src, int len);
void	*ft_memset(void *s, int c, unsigned int n);
char	*ft_strdup(char *s1);
char	*ft_strchr(char *s, char c);
int		ft_strlcat(char *dest, char *src, int len);
int		ft_strlcpy(char *dest, char *src, int len);
int		ft_strlen(const char *s);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strnstr(char *s1, char *s2, unsigned int len);
char	*ft_strrchr(char *s, char c);
char	ft_tolower(char c);
char	ft_toupper(char c);

char	*ft_substr(char const *s, unsigned int start, unsigned int len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char *s1, char *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif