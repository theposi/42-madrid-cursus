/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crizapat <crizapat@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:52:12 by crizapat          #+#    #+#             */
/*   Updated: 2024/08/27 14:28:26 by crizapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int ft_printf(char const *format, ...)
{   
    int i;
    int printed_chars;
    va_list args;

    i = 0;
    printed_chars = 0;
    va_start(args, format);
    while (format[i] != '\0')
    {
        if (format[i] == '%')
        {
            i++;
            format_catcher(&format[i], args, &printed_chars);
        }
        else
        {
            ft_putchar(format[i], &printed_chars);
        }
        i++;
    }
    va_end(args);
    return (printed_chars);
}

int main() {
    /*char *string = "Hola Mundo!";*/

    int numb = 5588885;
    int printed_characs = ft_printf("My fn: %d\n", numb);
    int print = printf("No fn: %d\n", numb);
    printf("Own: %d\n", printed_characs);
    printf("Printf: %d\n", print);
    return 0;
}
