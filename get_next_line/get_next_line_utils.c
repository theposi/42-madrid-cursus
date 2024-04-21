/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crizapat <crizapat@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:54:52 by crizapat          #+#    #+#             */
/*   Updated: 2024/04/17 12:41:13 by crizapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include <fcntl.h>
# include <limits.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

void	*ft_calloc(size_t items, size_t size)
{
    void	*ptr;

	if (size != 0 && SIZE_MAX / size < items)
		return (NULL);
	ptr = malloc(items * size);
	if (ptr == 0)
		return (0);
    size = items * size;
    while (size--)
        ((unsigned char *)ptr)[size] = 0;
	return (ptr);
}

int main()
{
    size_t  items = 5;
    size_t  size = 2;

    printf("La memoria es: %s\n", (char *)ft_calloc(items, size));
    return (0);
}
