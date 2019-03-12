##
## EPITECH PROJECT, 2018
## my_printf
## File description:
## makefile
##

RM		=		rm -f

CC		=		gcc -c

AR		=		ar rc

CFLAGS	=		-W -Werror -Wall -Wextra -g

SRC		=		my_printf.c\
				format.c\
				format2.c\
				my_put_nbr_base.c\
				my_putstr.c\
				my_strlen.c\
				my_putchar.c\
				my_showstr_base.c

OBJ		=		$(SRC:.c=.o)

NAME	=		libmy.a


all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(SRC) $(CFLAGS)
			$(AR) $(NAME) $(OBJ)
			ranlib $(NAME)
clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

cmp:		
			gcc $(SRC) $(CFLAGS)
			./a.out
			$(RM) ./a.out