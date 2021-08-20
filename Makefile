
NAME = libftprintf.a
CC = gcc
FLUG = -Wall -Wextra -Werror
SRC = ft_printf.c
OBJ = $(SRC:.c=.o)
SRCDIR = ./src
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
	rm -f $(SRCDIR)/*.o
fclean		:clean
	rm -f $(NAME)
	rm -f $(SRCDIR)/*.a
re			:fclean all

.PHONY		:all clean fclean re