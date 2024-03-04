/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crizapat <crizapat@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 13:50:24 by crizapat          #+#    #+#             */
/*   Updated: 2024/03/04 11:19:26 by crizapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	words_counter(const char *str, char c)
{
	size_t i;
	size_t wordsToSave;

	i = 0;
	wordsToSave = 0;

	while(str[i] != '\0')
	{
		while (str[i] == c)
			i++;
		while (str[i] != c && str[i] != '\0')
		{
			i++;
			if (str[i] == c || str[i] != '\0')
				wordsToSave++;
		}
	}

	return (wordsToSave);
}

static char	**free_blocks(int i, char **block)
{
	while (i >= 0)
		free(block[i--]);
	free(block);
	return (0);
}

static char **fill_blocks(const char *s, char c, char **blocks)
{
	int i;
	int	start;
	int position;

	start = 0;
	position = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i] != '\0')
		{
			i++;
			if (s[i] == c || s[i] == '\0')
			{
				
			}
		}
	}
}

char **ft_split(char const *s, char c)
{
	
}