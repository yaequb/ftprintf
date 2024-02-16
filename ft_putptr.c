/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesques <ndesques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:49:26 by ndesques          #+#    #+#             */
/*   Updated: 2024/01/16 16:15:19 by ndesques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_pointer(unsigned long long ptr)
{
	int	len;

	len = 0;
	if (ptr >= 16)
	{
		len += ft_pointer(ptr / 16);
		len += ft_pointer(ptr % 16);
	}
	else
	{
		if (ptr <= 9)
			len += ft_putchar(ptr + '0');
		else
			len += ft_putchar(ptr - 10 + 'a');
	}
	return (len);
}

int	ft_putptr(unsigned long long ptr)
{
	int	len;

	len = 0;
	len += ft_putstr("0x");
	len += ft_pointer(ptr);
	return (len);
}
