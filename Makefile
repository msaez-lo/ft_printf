NAME = libftprintf.a

SRC = ft_printf.c conv_hex.c num_var.c put_pointers.c rm_perc.c

OBJ = $(SRC:.c=.o)

INCLUDE = ft_printf.h

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

LIB = ar rcs

LIBFT = libft.a

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ) $(INCLUDE)
		mv libft.a $(NAME)
		$(LIB) $(NAME) $(OBJ)

$(LIBFT):
		make -C libft
		cp libft/libft.a .

%.o: %.c
		$(CC) $(CFLAGS) -c -o $@ $<

clean:
		$(RM) $(OBJ)
		make clean -C libft

fclean: clean
		$(RM) $(NAME) libft.a
		make fclean -C libft

re: fclean all
