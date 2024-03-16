/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crizapat <crizapat@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:04:15 by crizapat          #+#    #+#             */
/*   Updated: 2024/02/20 12:21:54 by crizapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t items, size_t size)
{
	void	*ptr;

	ptr = malloc(items * size);
	if (ptr == 0)
		return (0);
	ft_bzero(ptr, items * size);
	return (ptr);
}

/* int main()
{
    int *ptr;
    size_t num_elements = 10;
    size_t element_size = sizeof(int);

    ptr = (int *)ft_calloc(num_elements, element_size);
    if (ptr == NULL)
    {
        printf("Error al reservar memoria. \n");
        return (1);
    }

    printf("La memoria se ha asignado correctamente.\n");
    printf("Valores del array (inicializados a cero):\n");
    for (size_t i = 0; i < num_elements; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    free(ptr);
    return (0);
} */