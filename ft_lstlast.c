/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crizapat <crizapat@c2r7s2.42madrid.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 13:05:59 by crizapat          #+#    #+#             */
/*   Updated: 2024/03/16 13:10:05 by crizapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/* int main()
{
	t_list *lst;
	t_list *node_one;

	node_one = ft_lstnew("First node");

	if (!node_one)
	{
		free(node_one);
	}
	lst = node_one;
	t_list *last_node = ft_lstlast(lst);
	printf("%s\n", (char *)last_node->content);
	free(node_one);
	return (0);
} */