/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesques <ndesques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:01:36 by ndesques          #+#    #+#             */
/*   Updated: 2024/01/16 16:15:10 by ndesques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_hexa(unsigned int n, const char c)
{
	if (n >= 16)
	{
		ft_hexa(n / 16, c);
		ft_hexa(n % 16, c);
	}
	else
	{
		if (n <= 9)
			ft_putchar(n + '0');
		else
		{
			if (c == 'x')
				ft_putchar(n - 10 + 'a');
			if (c == 'X')
				ft_putchar(n - 10 + 'A');
		}
	}
}

int	ft_puthex(unsigned int n, const char c)
{
	if (n == 0)
		return (write(1, "0", 1));
	else
		ft_hexa(n, c);
	return (ft_hlen(n));
}
