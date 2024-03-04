/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crizapat <crizapat@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 13:54:02 by crizapat          #+#    #+#             */
/*   Updated: 2024/01/18 11:08:59 by crizapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

/* int	main(void)
{
	char str[50] = "Hola Mundo!";
	printf("Antes del ft_bzero: \"%s\"\n", str);
	ft_bzero(str, 4);
	printf("Después del ft_bzero: \"%s\"\n", str);
	return (0);
} */
