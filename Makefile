
NAME = printf.a
CC = gcc
FLUG = -Wall -Wextra -Werror
SRC = ft_putchar.c ft_putnbr.c ft_printf.c ft_putstr.c ft_puthem.c
OBJ = $(SRC:.c=.o)

all			:$(NAME)
$(NAME)		:$(OBJ)
	ar -cr $(NAME) $(OBJ)
%.o			:%.c
	$(CC) $(FLUG) -c $<
$(OBJ)		:$(SRC)
clean		:
	rm -f $(OBJ)
fclean		:clean
	rm -f $(NAME)
re			:fclean all

.PHONY		:all clean fclean re