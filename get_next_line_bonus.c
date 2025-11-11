/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahdam <momahdam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 12:06:45 by momahdam          #+#    #+#             */
/*   Updated: 2025/11/11 21:45:14 by momahdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char *get_next_line(int fd)
{
	static char big_buffer[1024];
	int b_read;
	char *buffer;
	static int i = 0;

	buffer = ft_calloc(BUFFER_SIZE, sizeof(char));
	if (!buffer)
		return (NULL);
	b_read = read(fd, buffer,BUFFER_SIZE);
	if (b_read <= 0)
		return (NULL);
	ft_strlcat(big_buffer, buffer);
	while(big_buffer[i] && big_buffer[i] != '\n')
		i++;
	if(big_buffer[i++] == '\n')
		return ft_(big_buffer, i);
	return get_next_line(fd);
}
