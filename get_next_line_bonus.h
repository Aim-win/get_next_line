/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahdam <momahdam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 12:06:50 by momahdam          #+#    #+#             */
/*   Updated: 2025/11/11 21:37:22 by momahdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT
# define GET_NEXT

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 4

#endif

#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

char    *get_next_line(int fd);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t n, size_t size);
void	ft_strlcat(char *dest, const char *src);
char    *ft_(char *buff, int i);


#endif