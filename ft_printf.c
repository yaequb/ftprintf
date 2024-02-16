/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesques <ndesques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:46:14 by ndesques          #+#    #+#             */
/*   Updated: 2024/01/16 16:26:34 by ndesques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	list;
	size_t	i;
	int		len;

	if (!str)
		return (0);
	va_start(list, str);
	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%' && ft_convverif(str[i + 1]))
		{
			len += ft_convert(list, str[i + 1]);
			i++;
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(list);
	return (len);
}
