/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crizapat <crizapat@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 17:20:15 by crizapat          #+#    #+#             */
/*   Updated: 2024/01/16 10:48:21 by crizapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	value;

	str = s;
	value = (unsigned char)c;
	while (n > 0)
	{
		*str++ = value;
		n--;
	}
	return (s);
}

/* int	main(void)
{
	char	str[] = "Hola Mundo!";
	ft_memset(str, 'i', 2);
	printf("%s\n", str);
	return 0;
} */
