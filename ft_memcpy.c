/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crizapat <crizapat@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:09:51 by crizapat          #+#    #+#             */
/*   Updated: 2024/01/18 12:40:03 by crizapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (dst);
	while (i < len)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

/* int	main(void)
{
	char src[] = "Hola Marventis!";
	char dst[50];
	int i = 4;

	printf("Antes de la ejecución de ft_memcpy: \"%s\"\n", dst);

	ft_memcpy(dst, src, i);

	printf("Después de la ejecución de ft_memcpy: \"%s\"\n", dst);
} */