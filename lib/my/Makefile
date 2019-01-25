##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

SRC	=	my_strlen.c		\
		my_biggerstrlen.c	\
		my_put_nbr.c		\
		my_strcmp.c		\
		my_putchar.c		\
		my_getnbr.c		\
		my_random.c		\
		my_biggernbr.c		\
		my_smaller_nbr.c	\
		my_putstr.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:		$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)
		cp $(NAME) ../

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)
		rm -f ../$(NAME)

re:		fclean all
