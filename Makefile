SRCS  = ft_printf.c ft_iputchar.c ft_iputstr.c ft_iputnbr_base.c \
		ft_print_hex.c ft_putnbr.c ft_putnbr_u.c

OBJS	= ${SRCS:.c=.o}

FLAGS	= -Wall -Wextra -Werror

NAME	= libftprintf.a
HEAD	= ft_printf.h
CC = cc
%.o: %.c ${HEAD}
	${CC} ${FLAGS} -c $< -o $@

$(NAME):${OBJS}
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
