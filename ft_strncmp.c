/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crizapat <crizapat@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 10:55:59 by crizapat          #+#    #+#             */
/*   Updated: 2024/01/30 12:09:23 by crizapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((i < n) && (str1[i] || str2[i]))
	{
		if (str1[i] != str2[i])
			return (((unsigned char) str1[i] - (unsigned char) str2[i]));
		i++;
	}
	return (0);
}

/* int main()
{
	char prueba1[] = "Hola mi gente";	
	char prueba2[] = "Hola my people";
	size_t n = 6;

	int response = ft_strncmp(prueba1, prueba2, n);
	
	if (response == 0)
        printf("Las cadenas son iguales hasta los primeros %zu
		caracteres.\n", n);
    else if (response < 0)
        printf("La cadena 1 es menor que la cadena 2.\n");
    else
        printf("La cadena 1 es mayor que la cadena 2.\n");

    return 0;
} */