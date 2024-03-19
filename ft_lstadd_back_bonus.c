/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crizapat <crizapat@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 18:43:43 by crizapat          #+#    #+#             */
/*   Updated: 2024/03/17 19:17:32 by crizapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last_node = ft_lstlast(*lst);
	last_node->next = new;
}

/* int main()
{
	t_list	*lst;
	t_list	*node_one = ft_lstnew("Nodo uno");
	t_list	*node_two = ft_lstnew("Nodo dos");

	lst = node_one;
	ft_lstadd_front(&lst, node_two);

	printf("Se usa el ft_lstadd_back \n");
	ft_lstadd_back(&lst, ft_lstnew("Nodo creado en el add_back"));

	while(lst != NULL)
	{
		printf("%s\n", (char *)lst->content);
		if (lst->next == NULL)
			return (0);
		lst = lst->next;
	}	
} */