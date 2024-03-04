/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crizapat <crizapat@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:33:41 by crizapat          #+#    #+#             */
/*   Updated: 2024/02/27 11:17:09 by crizapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Busca la primera ocurrencia de un carácter específico en una cadena de
caracteres y devuelve un puntero a esa ubicación. */

#include "libft.h"

char	*ft_strchr(const char *a, int character)
{
	while ((char) character != *a)
	{
		if (!*a)
			return (0);
		a++;
	}
	return ((char *)a);
}
/* int	main()
{
	const char *str = "Hola Mundo, mi gente buenaaas";
	int charToFind = 'a';

	char *result = ft_strchr(str, charToFind);

	printf("El carácter '%c' se encuentra en la posición:
	%s\n", charToFind, result);
	
	return (0);
} */