/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crizapat <crizapat@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:12:50 by crizapat          #+#    #+#             */
/*   Updated: 2024/02/08 10:21:58 by crizapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int charac, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		if (((unsigned char *)ptr)[i] == (unsigned char)charac)
		{
			return ((void *)(ptr + i));
		}
		i++;
	}
	return (NULL);
}

/* int main()
{
	char prueba[] = "Hola Mundo!";
	int characterToSearch = 'u';
	size_t size = sizeof(prueba);

	void *result = ft_memchr(prueba, characterToSearch, size);

	if (result != NULL) 
	{
        printf("El carácter '%c' se encontró en la posición %ld.\n",
		characterToSearch, (size_t)(result - (void *)prueba));
    } 
	else 
	{
        printf("El carácter '%c' no se encontró en la cadena.\n",
		characterToSearch);
    }
    return (0);
} */