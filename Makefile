NAME =  libftprintf.a
CC = CC
AR = ar rcs
CFLAGS = -Wall -Wextra -Werror

SRCS =

OBJS = $(SRCS:.c=.o)

%.o: %.CC
	$(CC)$(CFLAGS) -c $, -o $@


all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all