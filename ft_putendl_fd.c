/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crizapat <crizapat@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:09:19 by crizapat          #+#    #+#             */
/*   Updated: 2024/03/12 12:03:28 by crizapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

/* #include <fcntl.h>
int main()
{
    char *str = "Hot Wheels";
    int fd = open("test", O_RDWR);
    ft_putendl_fd(str, fd);
    close(fd);
    return (0);
} */