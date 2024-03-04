/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crizapat <crizapat@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 08:41:12 by crizapat          #+#    #+#             */
/*   Updated: 2024/02/27 10:05:33 by crizapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Utilizamos esta función para concatenar varias cadenas de
texto en una sola cadena. */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	newstr = (char *)malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!newstr)
		return (NULL);
	while (s1[i])
	{
		newstr[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		newstr[i] = s2[j];
		i++;
		j++;
	}
	newstr[i] = '\0';
	return (newstr);
}

/* int main()
{
	const char str1[] ="Hola ";
	const char str2[] ="Mundo!";
	char *newstr;

	printf("Cadena 1: %s\n", str1);
	printf("Cadena 2: %s\n", str2);

	newstr = ft_strjoin(str1, str2);

	if (!newstr)
	{
		printf("Hubo algún error a la hora unir las cadenas.\n");
		return (1);
	}
	
	printf("Nueva cadena combinando ambas: %s\n", newstr);
	free(newstr);
	return (0);
} */
