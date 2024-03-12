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

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	numb;

	if (n >= 0)
	{
		numb = n;
	}
	else
	{
		numb = -n;
		write(fd, "-", 1);
	}
	if (numb >= 10)
	{
		ft_putnbr_fd(numb / 10, fd);
		ft_putchar_fd(numb % 10 + '0', fd);
	}
	else
	{
		ft_putchar_fd(numb + '0', fd);
	}
}

/* int main()
{
	ft_putnbr_fd(0, 1);
	return (0);
} */