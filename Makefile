
NAME = libftprintf.a
CC = gcc
FLUG = -Wall -Wextra -Werror
SRC = ft_printf.c
OBJ = $(SRC:.c=.o)
MAKE = make

all			:$(NAME)
$(NAME)		:$(OBJ)
	$(MAKE) -C ./src
	cp src/libft.a $(NAME)
	ar -cr $(NAME) $(OBJ)
%.o			:%.c
	$(CC) $(FLUG) -c $<
clean		:
	rm -f $(OBJ)
fclean		:clean
	rm -f $(NAME)
re			:fclean all

.PHONY		:all clean fclean re