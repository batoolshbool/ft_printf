NAME =  libftprintf.a
CC = cc
AR = ar rcs
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c ft_basic_specifiers.c ft_print_hex.c \
	ft_print_digit.c
	

OBJS = $(SRCS:.c=.o)

%.o: %.CC
	$(CC)$(CFLAGS) -c $, -o $@


all: $(NAME)
 
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all