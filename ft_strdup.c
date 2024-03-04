/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crizapat <crizapat@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:45:36 by crizapat          #+#    #+#             */
/*   Updated: 2024/02/22 13:35:13 by crizapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Permite crear una copia exacta de una cadena de caracteres existente,
asignando memoria dinámicamente
*/

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	size;
	char	*dest;

	size = ft_strlen(src);
	dest = (char *)malloc((size + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	ft_memcpy(dest, src, size);
	dest[size] = '\0';
	return (dest);
}

/* int	main(void)
{
	const char *str_source = "Hola, mundo cómo vamos pues ome ome!";
	char *str_dup = ft_strdup(str_source);

	if (str_dup != NULL)
    {
		printf("Cadena original: %s\n", str_source);
		printf("Cadena duplicada: %s\n", str_dup);
		free(str_dup);
    }
	else
    {
		printf("Error al duplicar la cadena.\n");
    }
	return (0);
} */