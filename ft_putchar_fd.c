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

#include "libft.h"

void	ft_putchar_fd(char charac, int fd)
{
	write(fd, &charac, 1);
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