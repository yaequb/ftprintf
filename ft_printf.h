/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesques <ndesques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:48:58 by ndesques          #+#    #+#             */
/*   Updated: 2024/01/16 16:08:51 by ndesques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_convert(va_list list, const char c);
int		ft_convverif(char c);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putptr(unsigned long long ptr);
int		ft_putnbr(int n);
int		ft_puthex(unsigned int n, const char c);
int		ft_putunsigned(unsigned int n);

size_t	ft_strlen(const char *str);
char	*ft_itoa(int n);
int		ft_hlen(unsigned int n);

#endif