/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crizapat <crizapat@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 21:47:49 by crizapat          #+#    #+#             */
/*   Updated: 2024/01/21 20:51:31 by crizapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	size_t	i;
	size_t	j;

	if (!len && !dst)
		return (0);
	if (len <= ft_strlen(dst))
		return (len + ft_strlen(src));
	i = ft_strlen(dst);
	j = 0;
	while (src[j] != '\0' && i + 1 < len)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[j]));
}

/* int main(void)
{
    char dest[20] = "Hello jajajajaja";
    const char *source = ", World!";
    size_t result;

    printf("Antes de ft_strlcat: \"%s\"\n", dest);
    
    result = ft_strlcat(dest, source, sizeof(dest));
    
    printf("Después de ft_strlcat: \"%s\"\n", dest);
    printf("Longitud total: %zu\n", result);

    return 0;
} */