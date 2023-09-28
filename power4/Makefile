##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## creat my.h and compil code
##

SRC	= src/*.c

NAME	= bsq

CC	= gcc -g

all:	$(NAME) clean

$(NAME):
	$(CC) $(SRC) -o $(NAME)

clean:
	rm -f *~
	rm -f *.gc*
	rm -f coding-style-reports.log

fclean: clean
	rm -f $(NAME)
	rm -f $(UNIT)

re:	fclean all

.PHONY:	$(NAME) all clean
