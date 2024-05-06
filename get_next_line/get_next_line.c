/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crizapat <crizapat@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:55:19 by crizapat          #+#    #+#             */
/*   Updated: 2024/04/30 11:02:44 by crizapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char* read_storage(int fd, char* rest_storage)
{
    char        buffer[BUFFER_SIZE + 1];
    char*       tmp;
    ssize_t     bytes_to_read;

    bytes_to_read = 1;
    while(bytes_to_read > 0)
    {
        if (ft_strchr(rest_storage, '\n'))
            return (rest_storage);
        bytes_to_read = read(fd, buffer, BUFFER_SIZE);
        if (bytes_to_read < 0)
            return (NULL);
        if (bytes_to_read == 0 && !rest_storage)
            return (NULL);
        buffer[bytes_to_read] = '\0';
        tmp = rest_storage;
        rest_storage = ft_strjoin(rest_storage, buffer);
        if (rest_storage == NULL)
            return (NULL);
        free(tmp);
    }
    return (rest_storage);
}

static char* split_lines(char** rest_storage)
{
    char*   final_line;
    char*   position;
    char*   tmp;
    
    if (!(*rest_storage)[0])
        return (NULL);
    position = ft_strchr(*rest_storage, '\n');
    if (!position)
    {
        tmp = ft_strdup(*rest_storage);
        free(*rest_storage);
        *rest_storage = NULL;
        return (tmp);
    }
    final_line = malloc(sizeof(char) * (position - *rest_storage + 2));
    if (!final_line)
        return (NULL);
    ft_strlcpy(final_line, *rest_storage, position - *rest_storage + 2);
    ++position;
    tmp = *rest_storage;
    *rest_storage = ft_strdup(position);
    free(tmp);
    return (final_line);
}

char* get_next_line(int fd)
{
    static char* rest_storage = NULL;
    char* line;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);
    rest_storage = read_storage(fd, rest_storage);
    if (rest_storage == NULL) 
        return (NULL);
    if (rest_storage != NULL)
    {
        line = split_lines(&rest_storage);
        if (line == NULL)
            return (NULL);
        return (line);
    }
    free(rest_storage);
    rest_storage = NULL;
    return (0);
}