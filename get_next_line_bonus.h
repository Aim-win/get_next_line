/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahdam <momahdam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 12:06:50 by momahdam          #+#    #+#             */
/*   Updated: 2025/11/12 08:05:52 by momahdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1337
# endif

char	*ft_handle_read(char **big_buffer, char *buffer, int b_read, int fd);

char	*ft_line_alloc(char *big_buf, char *buffer, int b_read);

char	*ft_extract_line(char *buff, int len);

void	ft_bzero(void *s, size_t n);

void	*ft_calloc(size_t n, size_t size);

char	*ft_strjoin(char *s1, char *s2);

char	*get_next_line(int fd);

size_t	ft_strlen(char *s);

#endif
