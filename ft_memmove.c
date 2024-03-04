/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crizapat <crizapat@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:41:47 by crizapat          #+#    #+#             */
/*   Updated: 2024/01/20 17:23:54 by crizapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Copy len bytes from src to dst memory space

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst && !src)
		return (dst);
	if ((const char *) src >= (const char *) dst)
	{
		i = 0;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		i = len;
		while (i > 0)
		{
			((unsigned char *)dst)[i - 1] = ((unsigned char *)src)[i - 1];
			i--;
		}
	}
	return (dst);
}

/* int main(void)
{
    char src[] = "Hola Marventis!";
    char dest[20];
    int i = 6;

    printf("Antes de ft_memmove: \"%s\"\n", dest);

    ft_memmove(dest, src, i);

    printf("Después de ft_memmove: \"%s\"\n", dest);

    return (0);
} */
