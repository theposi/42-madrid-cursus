/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crizapat <crizapat@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 12:49:03 by crizapat          #+#    #+#             */
/*   Updated: 2024/03/12 14:31:51 by crizapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_list;

	new_list = (t_list *)malloc(sizeof (t_list));
	if (new_list == NULL)
		return (NULL);
	new_list->content = content;
	new_list->next = NULL;
	return (new_list);
}

/* int main()
{
	char *content = "Totoro";
	t_list *response = ft_lstnew(content);
	if (response != NULL)
	{
		printf("Soy la respuesta %s\n", (char *)(response->content));
		free(response);
	}
	return (0);
} */