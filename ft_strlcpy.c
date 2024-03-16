/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crizapat <crizapat@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:24:52 by crizapat          #+#    #+#             */
/*   Updated: 2024/02/27 08:10:17 by crizapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	if (len > 0)
	{
		while (i < len - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

/* int main(void)
{
    char dest[20];
    char *source = "Hello, World solo MArventis arriba mi papá!";

    size_t result = ft_strlcpy(dest, source, sizeof(dest));

    printf("Cadena copiada: %s\n", source);
    printf("Cadena copiada: %s\n", dest);
    printf("Longitud de la cadena original: %zu\n", result);

    return 0;
} */