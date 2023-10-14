SRCS  = ft_printf.c ft_iputchar.c ft_iputstr.c ft_iputnbr_base.c \
		ft_print_hex.c ft_idigit.c ft_putnbr.c

OBJS	= ${SRCS:%.c=%.o}

FLAGS	= -Wall -Wextra -Werror

NAME	= libftprintf.a

$(NAME):
	gcc $(FLAGS) -c $(SRCS) -I ./
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all