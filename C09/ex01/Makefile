SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS = $(SRCS:.c=.o)
HEADER = includes
NAME = libft.a
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
LIBRC = ar rc
LIB = ranlib

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I $(HEADER)

$(NAME): $(OBJS)
	$(LIBRC) $(NAME) $(OBJS)
	$(LIB) $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
