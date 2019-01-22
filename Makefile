##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## CPD10ysk01
##

SRC	=	my_tab.c	\
		check_end.c	\
		line.c		\
		game.c		\
		intochar.c	\
		gametwo.c	\
		main.c

OBJ	=	$(SRC:.c=.o)

NAME	=	matchstick

CFLAGS	=	-I ./include -W -Wall -Wextra -Werror

LIB	=	-L ./lib/ -lmy

all:		$(NAME)

$(NAME):	$(OBJ)
		make -sC ./lib/my/
		gcc -o $(NAME) $(OBJ) $(LIB)

clean:
		rm -f $(OBJ)
		make -sC ./lib/my clean

fclean: 	clean
		rm -f $(NAME)
		make -sC ./lib/my fclean

re: fclean all
