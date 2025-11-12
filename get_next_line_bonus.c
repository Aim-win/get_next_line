/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahdam <momahdam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 12:06:45 by momahdam          #+#    #+#             */
/*   Updated: 2025/11/12 07:39:48 by momahdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_extract_line(char *buff, int len)
{
	char	*line;
	int		i;
	int		j;

	i = 0;
	line = malloc(len + 1);
	if (!line)
		return (NULL);
	while (i < len && buff[i])
	{
		line[i] = buff[i];
		i++;
	}
	line[i] = '\0';
	j = 0;
	while (buff[len])
		buff[j++] = buff[len++];
	buff[j] = '\0';
	return (line);
}

char	*ft_line_alloc(char *big_buf, char *buffer, int b_read)
{
	char	*line;
	int		is_alloc;

	is_alloc = 0;
	if (b_read > 0)
	{
		if (!big_buf)
		{
			big_buf = ft_calloc(1, 1);
			is_alloc = 1;
		}
		line = ft_strjoin(big_buf, buffer);
		if (line)
			return (line);
		if (is_alloc)
			free(big_buf);
	}
	return (NULL);
}

char	*ft_handle_read(char **big_buffer, char *buffer, int b_read, int fd)
{
	if (b_read < 0)
	{
		free(big_buffer[fd]);
		free(buffer);
		big_buffer[fd] = NULL;
		return (NULL);
	}
	if (b_read == 0 && (!big_buffer[fd] || !big_buffer[fd][0]))
	{
		free(big_buffer[fd]);
		free(buffer);
		big_buffer[fd] = NULL;
		return (NULL);
	}
	big_buffer[fd] = ft_line_alloc(big_buffer[fd], buffer, b_read);
	free(buffer);
	return (big_buffer[fd]);
}

char	*get_next_line(int fd)
{
	static char	*big_buffer[4096];
	char		*buffer;
	int			b_read;
	int			i;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	while (1)
	{
		buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
		if (!buffer)
			return (NULL);
		b_read = read(fd, buffer, BUFFER_SIZE);
		if (!ft_handle_read(big_buffer, buffer, b_read, fd))
			return (NULL);
		if (!big_buffer[fd])
			return (NULL);
		i = 0;
		while (big_buffer[fd][i] && big_buffer[fd][i] != '\n')
			i++;
		if (big_buffer[fd][i] == '\n')
			return (ft_extract_line(big_buffer[fd], i + 1));
		if (b_read <= 0)
			return (ft_extract_line(big_buffer[fd], i));
	}
}
