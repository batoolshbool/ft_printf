NAME =  libftprintf.a
CC = cc
AR = ar rcs
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c ft_print_hex.c \
	ft_print_digit.c ft_basic_specifiers.c
	

OBJS = $(SRCS:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


all: $(NAME)
 
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
