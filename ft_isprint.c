/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crizapat <crizapat@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 14:54:42 by crizapat          #+#    #+#             */
/*   Updated: 2024/01/29 14:13:20 by crizapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int print)
{
	if (print >= 32 && print <= 126)
		return (1);
	return (0);
}

/*int	main(void)
{
	int	print = ft_isprint(32);
	printf("%d\n", print);
	return (0);
}*/
