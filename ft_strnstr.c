/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crizapat <crizapat@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 10:55:44 by crizapat          #+#    #+#             */
/*   Updated: 2024/02/20 12:02:07 by crizapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (needle[j] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		while (((i + j) < len) && (haystack[i + j] == needle[j])
			&& needle[j] != '\0')
			j++;
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
		j = 0;
	}
	return (0);
}

/* int main()
{
	const char haystack[] = "Hola mi gente, espero estén excelente";
	const char needle[] = "jaja Hola mi gente";
	size_t len = 14;

	char *result = ft_strnstr(haystack, needle, len);

	if (result != NULL) {
        printf("La subcadena '%s' fue encontrada en
		'%s'.\n", needle, haystack);
        printf("La subcadena comienza en la posición:
		%ld\n", result - haystack);
    } else {
        printf("La subcadena '%s' no fue encontrada
		en '%s'.\n", needle, haystack);
    }

    return 0;
} */