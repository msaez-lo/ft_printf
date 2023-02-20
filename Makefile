NAME = printf

SRC = ft_printf.c

OBJ = $(SRC:.c=.o)

LIB = -Llibft

INCLUDE = ft_printf.h

CC = gcc

CFLAGS = -Wall -Wextra #-Werror

RM = rm -f

all: $(NAME)

$(NAME): libft $(OBJ) $(INCLUDE)
		$(CC) $(OBJ) -o $(NAME) $(LIB)

libft: 
		make -C libft

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