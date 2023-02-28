NAME = printf

SRC = ft_printf.c

OBJ = $(SRC:.c=.o)

INCLUDE = ft_printf.h

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
		make -C libft
		cp libft/libft.a .
		$(CC) $(OBJ) libft.a -o $(NAME)

%.o: %.c
		$(CC) $(CFLAGS) -c -o $@ $<

clean:
		$(RM) $(OBJ)
		make clean -C libft

fclean: clean
		$(RM) $(NAME)
		make fclean -C libft

re: fclean all

rebonus: fclean bonus