/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crizapat <crizapat@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 13:40:14 by crizapat          #+#    #+#             */
/*   Updated: 2024/02/27 09:49:59 by crizapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Toma una cadena de entrada, un índice de inicio y una longitud,
y devuelve una nueva cadena que es un subconjunto de la cadena original,
comenzando desde el índice de inicio y con una longitud dada. */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstr;
	size_t	newslen;
	size_t	newsend;

	if (!s)
		return (0);
	newslen = ft_strlen(s);
	if (start > newslen)
		return (ft_strdup(""));
	newsend = 0;
	if (start < newslen)
		newsend = newslen - start;
	if (newslen > len)
		newsend = len;
	newstr = (char *)malloc(sizeof(char) * (newsend + 1));
	if (!newstr)
		return (0);
	ft_strlcpy(newstr, s + start, newsend + 1);
	return (newstr);
}

/* int main() {
    char *str = "Hello, world!";
    unsigned int start = 7;
    size_t len = 5;

    printf("Original: %s\n", str);

    char *newstr = ft_substr(str, start, len);
    if (newstr) {
        printf("Substring: %s\n", newstr);
    } else {
        printf("Error al extraer el substring.\n");
    }
    return 0;
} */
