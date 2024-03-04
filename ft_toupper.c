/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crizapat <crizapat@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 20:52:16 by crizapat          #+#    #+#             */
/*   Updated: 2024/01/22 12:41:36 by crizapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Convert the lowercase parameter (character)
// to the equivalent uppercase character.

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

/* int	main()
{
	int letter = ft_toupper('h');
	printf("%c\n", letter);
	return (0);
} */