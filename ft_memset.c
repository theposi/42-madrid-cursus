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

void	*ft_memset(void *ptr, int charac, size_t len)
{
	unsigned char	*str;
	unsigned char	value;

	str = ptr;
	value = (unsigned char)charac;
	while (len > 0)
	{
		*str++ = value;
		len--;
	}
	return (ptr);
}

/* int	main(void)
{
	char	str[] = "Hola Mundo!";
	ft_memset(str, 'i', 2);
	printf("%s\n", str);
	return 0;
} */
