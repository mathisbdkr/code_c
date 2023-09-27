##
## EPITECH PROJECT, 2023
## all_navy
## File description:
## Makefile
##

SRC	=	lib/*.c	\
	src/*.c	\

OBJ	=	$(SRC/.c=.o)

NAME	=	navy

$(NAME):
	gcc -g $(SRC) -o $(NAME)

all:	$(NAME) clean

clean:
	rm -f $(OBJ)

fclean:	clean
	rm $(NAME)

re:	fclean all

.PHONY:	$(NAME) all clean
