##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## creat my.h and compil code
##

NAME1	= ./lib/libmy.a

CC	= gcc -g

AR	= ar rcs

RM	= rm -f

SRCS	= $(wildcard *.c) $(wildcard ./**/*.c)
OBJS	= $(SRCS:.c=.o)

all:	$(NAME1)

$(NAME1):CFLAGS += $(T_FLAGS)
$(NAME1):$(OBJS)
	$(AR) $(NAME1) $(OBJS)

re:	fclean all

.PHONY:	all clean fclean re

NAME	= encode

RM	= rm -f

CFLAGS	= -Wall -I./include

LIB	= -lmy -L./lib

CC	= gcc

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) *.c $(LIB)

all:	$(NAME) clean

clean:
	$(RM) rm -rf *.o rm -rf ./lib/*.o

fclean: clean
	rm -rf *.o rm -rf ./lib/*.o
	rm $(NAME) rm lib/libmy.a

re:	fclean all

.PHONY:	$(NAME) all clean
