/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crizapat <crizapat@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:48:18 by crizapat          #+#    #+#             */
/*   Updated: 2024/02/12 13:20:18 by crizapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t len)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *) str1;
	ptr2 = (unsigned char *) str2;
	if (len == 0)
		return (0);
	while ((*ptr1 == *ptr2) && len -1 > 0)
	{
		ptr1++;
		ptr2++;
		len--;
	}
	return ((int)(*ptr1 - *ptr2));
}

/* int main()
{
	char str1[] = "Hola Marventis!";
	char str2[] = "Hola Marventis";
	size_t n = sizeof(str1);

	int response = ft_memcmp(str1, str2, n);

	if (response == 0)
		printf("Las cadenas son iguales.\n");
	else if (response < 0)
		printf("La primer cadena es menor que la segunda.\n");
	else
		printf("La primer cadena es mayor que la segunda.\n");
	return (0);
} */