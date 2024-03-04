/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crizapat <crizapat@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 11:38:49 by crizapat          #+#    #+#             */
/*   Updated: 2024/02/22 12:51:59 by crizapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Esta función convierte una cadena de caracteres que representa un número en
formato ASCII en su equivalente entero. Ignora los espacios iniciales,
interpreta el signo opcional y detiene la conversión cuando encuentra un
carácter que no es un dígito. Devuelve el número convertido como un entero. */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					i;
	int					sign;
	unsigned long int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	return (res * sign);
}

/* int	main()
{
	const char str[] = " 7~7 c";
	int response = ft_atoi(str);
	printf("El valor es: %d\n", response);
	return (0);
} */