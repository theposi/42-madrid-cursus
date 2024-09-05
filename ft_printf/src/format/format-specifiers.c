/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format-specifiers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crizapat <crizapat@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:52:24 by crizapat          #+#    #+#             */
/*   Updated: 2024/08/27 14:38:17 by crizapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

int format_catcher(char const *format, va_list args, int *index)
{
    if (*format == 'c')
    {
        char c = (char)va_arg(args, int);
        ft_putchar(c, index);
    }
    else if (*format == 's')
    {
        char *str = va_arg(args, char *);
        ft_putstr(str, index);
    }
    else if (*format == 'i' || *format == 'd')
    {
        int numb = va_arg(args, int);
        ft_putnumb(numb, index);
    }
    return (0);
}
