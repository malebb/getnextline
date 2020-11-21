/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 15:27:52 by mlebrun           #+#    #+#             */
/*   Updated: 2020/11/21 15:50:36 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <unistd.h>
# include <stdlib.h>

int		ft_strlen(char *str);
void	ft_strncat(char *dest, char *src, int n);
void	ft_strcpy_from(char *dest, char *src, int j);
int		ft_update_line(char **line, int j, char *buffer);
int		ft_read_file(int fd, char *buffer, char *buf_remains, char **line);
int		ft_finish_buffer(char *buffer, char *buf_remains, char **line);
int		get_next_line(int fd, char **line);
void	ft_empty_buffer(char *buf_remains);
char	*ft_strdup(const char *s1);

#endif
