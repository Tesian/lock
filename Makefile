##
## Makefile for my_sh in /home/tessie_g//afs/rendu/projets/minishell
## 
## Made by adrian tessier
## Login   <tessie_g@epitech.net>
## 
## Started on  Mon Dec 12 16:32:59 2011 adrian tessier
## Last update Fri Apr 13 14:51:29 2012 adrian tessier
##

CC=	gcc

CFLAGS=	-g -Wall -Wextra -pedantic

NAME=	lock

SRC=	main.c \
	func_img.c \
	password.c \
	my_strcat_op.c \
	sort_img.c

OBJ=	$(SRC:.c=.o)

LIB=	-L./lib -lmy

$(NAME):	lib $(OBJ)
		make -C ./lib
		cc -o $(NAME) $(OBJ) -lSDL -lSDL_ttf $(LIB)

all:		$(NAME)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
		rm -f $(OBJ)