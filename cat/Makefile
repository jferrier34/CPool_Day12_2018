##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## 
##

SRC	=	cat.c

OBJ	=	$(SRC:.c=.o)

NAME	=	cat

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
