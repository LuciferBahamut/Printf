##
## EPITECH PROJECT, 2019
## makefile
## File description:
## my_printf
##

NAME	=	libmy.a

SRC	=	lib/my/my_printf.c \
		lib/my/my_putchar.c \
		lib/my/my_putstr.c \
		lib/my/my_revstr.c \
		lib/my/my_put_nbr.c \
		lib/my/my_convert_base.c \
		lib/my/error_handling.c \
		lib/my/gest_flag.c \
		lib/my/unsigned_number.c

CC	=	gcc

AR	=	ar rc

DEFLAGS	=	-W -Wextra -Wall -g3

CPPFLAGS	=	-I./include/

CFFLAGS	=	tests/unit_tests.c -I./include --coverage -lcriterion

OBJ	=	$(SRC:.c=.o)

all	:	$(OBJ)
		$(AR) $(NAME) $(OBJ)

build	:	$(OBJ)
		$(CC) $(DEFLAGS) -o $(NAME) $(OBJ) $(CPPFLAGS)

TU	:
		$(CC) -o unit_tests lib/my/*.c $(CFFLAGS)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)
		rm -f *# \
		rm -f *~ \
		rm -f *.gcda \
		rm -f *.gcno

re	:	fclean all

.PHONY	:	all build TU clean fclean re
