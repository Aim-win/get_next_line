/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahdam <momahdam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 12:06:43 by momahdam          #+#    #+#             */
/*   Updated: 2025/11/11 21:47:49 by momahdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

void	ft_bzero(void *s, size_t n)
{
	size_t  i;
	unsigned char *arr;

	if (!s)
		return ;
	arr = (unsigned char *)s;
	i = 0;
	while (i < n)
		arr[i++] = '\0';
}

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;
	size_t	tt;
	
	if (n == 0 || size == 0)
    	return (malloc(1));
	tt = n * size;
	if (tt / size != n)
		return (NULL);
	ptr = (void *) malloc(tt);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, (n * size));
	return (ptr);
}

void	ft_strlcat(char *dest, const char *src)
{
	static int	i = 0;
	int	j = 0;

	while (src[j] != '\0')
		dest[i++] = src[j++];
}

char *ft_(char *buff, int i)
{
	char *s2;
	int y = 0;
	static int j;

	j = 0;
	s2 = malloc(i - j + 1);
	if (!s2)
		return (NULL);
	while (buff[j] != '\n' && i - j != 0)
	{
		s2[y++] = buff[j];
		j++;
	}
	return (s2);
}