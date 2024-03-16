/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crizapat <crizapat@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:45:36 by crizapat          #+#    #+#             */
/*   Updated: 2024/03/07 17:07:45 by crizapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	size;
	char	*dest;

	size = ft_strlen(str);
	dest = (char *)malloc((size + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	ft_memcpy(dest, str, size);
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