/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crizapat <crizapat@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 15:49:40 by crizapat          #+#    #+#             */
/*   Updated: 2024/01/29 14:12:41 by crizapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/* int	main(void)
{
	char	arr[] = "Hola Mundo!";
	printf("%ld\n", ft_strlen(arr));
	return (0);
} */