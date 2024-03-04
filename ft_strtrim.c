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

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*newptr;
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s1);
	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (j > 0 && ft_strchr(set, s1[j]))
		j--;
	newptr = ft_substr(s1, i, (j + 1) - i);
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