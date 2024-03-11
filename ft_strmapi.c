/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crizapat <crizapat@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 16:05:33 by crizapat          #+#    #+#             */
/*   Updated: 2024/03/11 11:33:57 by crizapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Toma una cadena de caracteres y una función que opera en cada carácter de la
cadena y devuelve una nueva cadena con los resultados de aplicar
la función a cada carácter.  */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*dest;
	unsigned int	length;

	i = 0;
	length = ft_strlen(s);
	dest = ft_strdup(s);
	if (!dest)
		return (NULL);
	while (i < length)
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	return (dest);
}

/* char	uppercase_mapper(unsigned int i, char c)
{
	char	str;
	(void)	i;
	str	=	c;
	if	(str >= 97 && str <= 122)
		str -= 32;
	return (str);
}

int	main()
{
	char *str = "Hola Leia bonita guapetona";
	char *response = ft_strmapi(str, uppercase_mapper);
	printf("%s\n", response);
	return (0);
} */