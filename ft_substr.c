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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	slen;
	size_t	end;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	if (start > slen)
		return (ft_strdup(""));
	end = 0;
	if (start < slen)
		end = slen - start;
	if (end > len)
		end = len;
	new = (char *)malloc(sizeof(char) * (end + 1));
	if (!new)
		return (0);
	ft_strlcpy (new, s + start, end + 1);
	return (new);
}

/* int main() {
    char *str = "Hello, world!";
    unsigned int start = 7;
    size_t len = 5;

    printf("Original: %s\n", str);

    char *str = ft_substr(str, start, len);
    if (str) {
        printf("Substring: %s\n", str);
    } else {
        printf("Error al extraer el substring.\n");
    }
    return 0;
} */
