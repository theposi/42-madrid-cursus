/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crizapat <crizapat@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 19:22:31 by crizapat          #+#    #+#             */
/*   Updated: 2024/03/11 11:35:21 by crizapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *str, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!str || !f)
		return ;
	i = 0;
	while (str[i] != '\0')
	{
		f(i, &str[i]);
		i++;
	}
}

/* void	list_items(unsigned int i, char *str)
{
	printf("La posición actual del caracter: %c es: %u\n", *str, i);
}

int	main()
{
	char *str = "Vamos con toda paiii!!";
	printf("Esta es la cadena base: %s\n", str);
	ft_striteri(str, list_items);
	return (0);
} */