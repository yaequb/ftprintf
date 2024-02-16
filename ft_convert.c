/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesques <ndesques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:24:35 by ndesques          #+#    #+#             */
/*   Updated: 2024/01/16 16:39:18 by ndesques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convverif(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == '%'
		|| c == 'i' || c == 'u' || c == 'u' || c == 'x' || c == 'X')
		return (1);
	return (0);
}

int	ft_convert(va_list list, const char c)
{
	if (c == 'c')
		return (ft_putchar(va_arg(list, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(list, char *)));
	else if (c == 'p')
		return (ft_putptr(va_arg(list, unsigned long long)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(list, int)));
	else if (c == 'u')
		return (ft_putunsigned(va_arg(list, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (ft_puthex(va_arg(list, unsigned int), c));
	else if (c == '%')
		return (ft_putchar('%'));
	return (0);
}
