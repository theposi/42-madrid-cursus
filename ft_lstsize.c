/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crizapat <crizapat@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 09:00:37 by crizapat          #+#    #+#             */
/*   Updated: 2024/03/15 18:20:21 by crizapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 1;
	if (!lst)
		return (0);
	while (lst->next)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

int main()
{
	t_list *lst = ft_lstnew("nodo número uno");
	ft_lstadd_front(&lst, ft_lstnew("nodo número dos"));
	ft_lstadd_front(&lst, ft_lstnew("nodo número tres"));

	printf("Tamaño de la lista: %d\n", ft_lstsize(lst));
	return (0);
}