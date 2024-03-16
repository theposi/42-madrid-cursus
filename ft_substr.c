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

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*newstr;
	size_t	newstrlen;
	size_t	newstrend;

	if (!str)
		return (0);
	newstrlen = ft_strlen(str);
	if (start > newstrlen)
		return (ft_strdup(""));
	newstrend = 0;
	if (start < newstrlen)
		newstrend = newstrlen - start;
	if (newstrlen > len)
		newstrend = len;
	newstr = (char *)malloc(sizeof(char) * (newstrend + 1));
	if (!newstr)
		return (0);
	ft_strlcpy(newstr, str + start, newstrend + 1);
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
