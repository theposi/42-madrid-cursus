/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crizapat <crizapat@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 10:07:25 by crizapat          #+#    #+#             */
/*   Updated: 2024/02/27 12:13:14 by crizapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Se utiliza para eliminar los caracteres especificados al principio
y al final de una cadena. */

#include "libft.h"

char	*ft_strtrim(char const *str, char const *set)
{
	char	*newptr;
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(str);
	if (!str)
		return (0);
	if (!set)
		return (ft_strdup(str));
	while (str[i] && ft_strchr(set, str[i]))
		i++;
	while (j > 0 && ft_strchr(set, str[j]))
		j--;
	newptr = ft_substr(str, i, (j + 1) - i);
	return (newptr);
}

/* int	main()
{
	const char str[] = "1111Hola mundo soy zac11";
	const char character[] = "1";
	char *newchar = ft_strtrim(str, character);

	if (newchar)
	{
		printf("Soy la cadena inicial: %s\n", str);
		printf("Soy la cadena parceada: %s\n", newchar);
	}

	return (0);
} */