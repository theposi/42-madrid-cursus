/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crizapat <crizapat@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:52:41 by crizapat          #+#    #+#             */
/*   Updated: 2024/08/27 13:47:08 by crizapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int ft_putchar(char charac, int *index);
int ft_putstr(char *str, int *index);
int ft_putnumb(int numb, int *index);
int format_catcher(char const *format, va_list args, int *index);

#endif
