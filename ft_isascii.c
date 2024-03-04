/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crizapat <crizapat@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 14:13:15 by crizapat          #+#    #+#             */
/*   Updated: 2024/01/14 14:53:23 by crizapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int ascii)
{
	if (ascii >= 0 && ascii <= 127)
		return (1);
	return (0);
}

/* int main(void)
{
    char character = 65;
    int is_ascii = ft_isascii(character);
    printf("El caracter %c ", character);
    if (is_ascii)
        printf("es un valor ASCII\n");
    else
        printf("no es un valor ASCII\n");
    return (0);
} */