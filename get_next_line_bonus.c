/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahdam <momahdam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 12:06:45 by momahdam          #+#    #+#             */
/*   Updated: 2025/11/11 19:45:28 by momahdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char *get_next_line(int fd)
{
	int b_read;
	char *buffer;

	buffer = ft_calloc(4, sizeof(char));
	if (!buffer)
		return (NULL);
	b_read = read(fd, buffer,4);
	if (b_read <= 0)
		return (NULL);
	return (buffer);
}