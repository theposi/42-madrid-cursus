/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crizapat <crizapat@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:36:47 by crizapat          #+#    #+#             */
/*   Updated: 2024/03/11 14:07:30 by crizapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Se usa para escribir un solo carácter en un descriptor de archivo dado. */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* int main()
{
    char c;
    int fd;

    c = 'J';
    fd = 1;
    ft_putchar_fd(c, fd);
    return (0);
} */