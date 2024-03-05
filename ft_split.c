/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crizapat <crizapat@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 13:50:24 by crizapat          #+#    #+#             */
/*   Updated: 2024/03/04 20:04:56 by crizapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	words_counter(const char *str, char c)
{
	size_t i;
	size_t wordsToSave;

	i = 0;
	wordsToSave = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c)
			i++;
		while (str[i] != c && str[i] != '\0')
		{
			i++;
			if (str[i] == c || str[i] == '\0')
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
	return (NULL);
}

static char	**fill_block(const char *s, char c, char **blocks)
{
	int i;
	int	start;
	int position;

	i = 0;
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
				blocks[position] = ft_substr(s, start, i - start);
				if (!blocks[position])
					return (free_blocks(position, blocks));
				position++;
			}
		}
	}
	return (blocks);
}

char	**ft_split(char const *s, char c)
{
	size_t		words;
	char		**blocks;

	words = words_counter(s, c);
	blocks = (char **)ft_calloc((words + 1), sizeof(char *));
	if (!blocks)
		return (NULL);
	return (fill_block(s, c, blocks));
}

int main()
{
    char const *str = "Hola, estoy cansada de programar";
    char c = ' ';

    char **token = ft_split(str, c);
    if (token == NULL)
    {
        printf("Error al dividir la cadena.\n");
        return (1);
    }

    int i = 0;
    while (token[i] != NULL)
    {
        printf("Token %d: %s\n", i + 1, token[i]);
        free(token[i]);
        i++;
    }
    free(token);

    return (0);
}