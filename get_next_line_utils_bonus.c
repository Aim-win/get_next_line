/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahdam <momahdam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 12:06:43 by momahdam          #+#    #+#             */
/*   Updated: 2025/11/11 19:45:47 by momahdam         ###   ########.fr       */
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
