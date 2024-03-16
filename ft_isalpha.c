/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crizapat <crizapat@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:26:58 by crizapat          #+#    #+#             */
/*   Updated: 2024/01/29 12:14:09 by crizapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int charac)
{
	if ((charac >= 'A' && charac <= 'Z')
		|| (charac >= 'a' && charac <= 'z'))
		return (1);
	return (0);
}

/* int main()
{
  int parameter = ft_isalpha('t');
  printf("%d\n", parameter);
  return (0);
} */
