/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crizapat <crizapat@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:42:40 by crizapat          #+#    #+#             */
/*   Updated: 2024/03/12 15:03:10 by crizapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/* int main ()
{
	t_list	*list;
	t_list	*new_node;

	list = ft_lstnew("Hello");
	new_node = ft_lstnew("World");
	ft_lstadd_front(&list, new_node);
	printf("%s\n", (char *) list->content);
	printf("%s\n", (char *) list->next->content);
} */