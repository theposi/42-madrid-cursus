/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crizapat <crizapat@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 12:04:15 by crizapat          #+#    #+#             */
/*   Updated: 2024/03/12 12:40:31 by crizapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int num, int fd)
{
	unsigned int	number;

	if (num >= 0)
	{
		number = num;
	}
	else
	{
		number = -num;
		write(fd, "-", 1);
	}
	if (number >= 10)
	{
		ft_putnbr_fd(number / 10, fd);
		ft_putchar_fd(number % 10 + '0', fd);
	}
	else
	{
		ft_putchar_fd(number + '0', fd);
	}
}

/* int main()
{
	ft_putnbr_fd(0, 1);
	return (0);
} */