NAME = libftprintf.a
CC  = gcc 
FLAG = -Wall -Werror -Wextra
RM   = rm -f

SRC = check_format.c \
	ft_printf.c \
	get_len.c \
	put_char.c \
	put_hex.c \
	put_nbr.c \
	put_ptr.c \
	put_str.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(FLAG) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
