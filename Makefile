NAME	= libftprintf.a

CC		= gcc
FLAGS	= -Wall -Wextra -Werror

SRC		= ft_printf \
			ft_putchar \
			ft_putstr \
			ft_putptr \
			ft_putnbr \
			ft_putunsigned \
			ft_puthex \
			ft_convert \
			ft_utils \

CSRC	= $(SRC:%=%.c)
OSRC	= $(SRC:%=%.o)

$(NAME): 
		$(CC) $(FLAGS) -c $(CSRC) -I./ 
		ar rcs $(NAME) $(OSRC)

all: $(NAME)

clean:
		rm -f $(OSRC)

fclean: clean
		rm -f $(NAME)
wclean: 
		del $(OSRC)
		del $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re