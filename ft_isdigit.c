/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crizapat <crizapat@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 12:57:20 by crizapat          #+#    #+#             */
/*   Updated: 2024/01/14 13:37:12 by crizapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int numb)
{
	if (numb >= '0' && numb <= '9')
		return (1);
	return (0);
}

/* int	main(void)
{
	int	numb = ft_isdigit('5');
	printf("%d\n", numb);
	return (0);
} */