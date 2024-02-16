/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesques <ndesques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:59:10 by ndesques          #+#    #+#             */
/*   Updated: 2024/01/16 16:15:13 by ndesques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_ulen(unsigned int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

static char	*ft_ualloc(unsigned int n)
{
	char	*str;
	int		len;

	len = ft_ulen(n);
	str = (char *)malloc((len + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (n != 0)
	{
		str[len - 1] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	return (str);
}

int	ft_putunsigned(unsigned int n)
{
	char	*str;
	int		len;

	len = 0;
	if (n == 0)
		len += write(1, "0", 1);
	else
	{
		str = ft_ualloc(n);
		len += ft_putstr(str);
		free(str);
	}
	return (len);
}
