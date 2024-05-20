/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crizapat <crizapat@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:04:57 by crizapat          #+#    #+#             */
/*   Updated: 2024/05/20 17:04:59 by crizapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "get_next_line.h"
//
// void ft_leaks()
// {
//     system("leaks -q a.out");
// }
//
// int main()
// {
//     atexit(ft_leaks);
//     int     fd = open("HarryPotter.txt", O_RDONLY);
//     char*   line;
//
//     line = get_next_line(fd);
//     if (line == NULL)
//         printf("There was an error trying to read te document \n");
//     while (line)
//     {
//         printf("This is the line: %s\n", line);
//         free(line);
//         line = get_next_line(fd);
//     }
//     close(fd);
//     return (0);
// }
//
