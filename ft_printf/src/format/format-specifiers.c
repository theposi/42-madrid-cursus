/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format-specifiers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crizapat <crizapat@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:52:24 by crizapat          #+#    #+#             */
/*   Updated: 2024/09/06 11:41:14 by crizapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

void format_catcher(char format, va_list args, int *index)
{
    if (format == 'c')
    {
        char c = (char)va_arg(args, int);
        ft_putchar(c, index);
    }
    else if (format == 's')
    {
        char *str = va_arg(args, char *);
        ft_putstr(str, index);
    }
    else if (format == 'i' || format == 'd')
    {
        int numb = va_arg(args, int);
        ft_putnumb(numb, index);
    }
    else if (format == 'x' || format == 'X')
    {
        unsigned int numb = va_arg(args, unsigned int);
        ft_puthex(numb, format, index);
    }
    else if (format == 'p')
    {
        void *ptr = va_arg(args, void *);
        ft_pointer_dir(ptr, format, index);
    }
    else if (format == 'u')
    {
        unsigned int unsigned_numb = va_arg(args, unsigned int);
        ft_unsigned_numb(unsigned_numb, index);
    }
    else if (format == '%')
    {
        char module = '%';
        ft_putchar(module, index);
    }
    return;
}