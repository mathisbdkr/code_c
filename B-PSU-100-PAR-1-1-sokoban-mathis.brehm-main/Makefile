##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## creat my.h and compil code
##

SRC	= src/*.c	\
	lib/*.c

NAME	=	my_sokoban

CC	=	gcc

$(NAME):
	$(CC) $(SRC) -g -lncurses -o $(NAME)

all:	$(NAME) clean

clean:
	rm -f src/*~

fclean:
	rm -f $(NAME)

re:	fclean all

.PHONY:	$(NAME) all clean
