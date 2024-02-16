
#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	ft_printf("salut c'est %s, j'ai %d ans xd. et je un %ctn de %s", "nico", 4, 'p', "nerd");
	// printf("real: %d\n", printf(" %p %p ", 0, 0));
	// ft_printf("fake: %d\n", ft_printf(" %p %p ", 0, 0));
	return (0);
}

// gcc -o test main.c ft_printf.c ft_convert.c ft_putchar.c ft_puthex.c ft_putnbr.c ft_putptr.c ft_putstr.c ft_putunsigned.c ft_utils.c -I.