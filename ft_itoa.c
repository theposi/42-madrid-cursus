/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crizapat <crizapat@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 13:13:04 by crizapat          #+#    #+#             */
/*   Updated: 2024/03/08 15:20:03 by crizapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Se utiliza para convertir un número entero a una cadena de caracteres. */

#include "libft.h"

static int	ft_digit_counter(long int i)
{
	int	counter;

	counter = 0;
	if (i < 0)
	{
		i *= -1;
		counter++;
	}
	while (i > 0)
	{
		i /= 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int num)
{
	char	*str;
	int		i;
	long	numb;

	if (num == 0)
		return (ft_strdup("0"));
	numb = (long)num;
	i = ft_digit_counter(numb);
	str = ft_calloc((i + 1), sizeof(char));
	if (!str)
		return (NULL);
	i--;
	if (numb < 0)
	{
		str[0] = '-';
		numb = numb * -1;
	}
	while (numb > 0)
	{
		str[i--] = numb % 10 + '0';
		numb = numb / 10;
	}
	return (str);
}

/* int	main(void)
{
	int n = -2147483647;
	char *response = ft_itoa(n);
	printf("El caracter que se trasformó es: %s\n", response);
	return (0);
}
 */