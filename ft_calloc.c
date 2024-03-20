/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crizapat <crizapat@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:04:15 by crizapat          #+#    #+#             */
/*   Updated: 2024/03/20 00:51:25 by crizapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t items, size_t size)
{
	void	*ptr;

	if (size != 0 && SIZE_MAX / size < items)
		return (0);
	ptr = malloc(items * size);
	if (ptr == 0)
		return (0);
	ft_bzero(ptr, items * size);
	return (ptr);
}
