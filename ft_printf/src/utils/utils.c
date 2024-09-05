/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crizapat <crizapat@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:52:30 by crizapat          #+#    #+#             */
/*   Updated: 2024/08/27 14:26:51 by crizapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

int ft_putchar(char charac, int *index)
{
    write(1, &charac, 1);
    (*index)++;
    return (1);
}

int ft_putnumb(int numb, int *index)
{
	unsigned int	number;

	if (numb >= 0)
	{
		number = numb;
	}
	else
	{
        char sign;

        sign = '-';
		number = -numb;
        ft_putchar(sign, index);

	}
	if (number >= 10)
	{
		ft_putnumb(numb / 10, index);
		ft_putchar(numb % 10 + '0', index);
	}
	else
	{
		ft_putchar((number + '0'), index);
	}
    return (1);
}

int ft_putstr(char *str, int *index)
{
    int i;

    i = 0;
    if (!str)
        return (0);
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        (*index)++;
        i++;
    }
    return (1);
}

int ft_puthex(unsigned long int numb, char format, int *index)
{
    int i;
    char *base;
    unsigned int base_lenght;
}


int  ft_nbr_unsigned(unsigned n, int *index)
{
  if (n >= 10)
    ft_nbr_unsigned(n / 10, index);
  ft_putchar(((n % 10) + '0'), index);
  return (n);
}

int  ft_pointer_direction(void *ptr, char format, int *index)
{
  if (!ptr)
  {
    ft_putstr("(nil)", index);
    return (-1);
  }
  ft_putstr("0x", index);
  ft_puthex((unsigned long) ptr, format, index);
  return (0);
}
