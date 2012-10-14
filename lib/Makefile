##
## Makefile for Makefile in /home/tessie_g//afs/rendu/lib
## 
## Made by adrian tessier
## Login   <tessie_g@epitech.net>
## 
## Started on  Mon Oct 24 09:35:09 2011 adrian tessier
## Last update Sun May 20 16:01:41 2012 adrian tessier
##

SRC=	get_next_line.c \
	my_getnbr_base.c \
	my_strcat.c \
	my_strdup.c \
	my_str_to_wordlist.c \
	my_count_word.c \
	my_tablen.c \
	my_tabcpy.c \
	my_str_to_wordtab.c \
	my_put_in_list.c \
	my_show_tabstr.c \
	my_free_tabstr.c \
	my_show_list.c \
	my_listlen.c \
	my_free_list.c \
	my_int_to_char.c \
	my_putstr_error.c \
	my_putchar.c \
	my_strcmp.c \
	my_tablen.c \
	is_lower.c \
	is_upper.c \
	is_num.c \
	is_alpha.c \
	is_alphanum.c \
	my_putnbr.c \
	my_putstr.c \
	my_strcpy.c \
	my_strlen.c \
	my_getnbr.c \
	my_memset.c \
	my_xmalloc.c

OBJ=	$(SRC:.c=.o)

NAME=	libmy.a

CFLAGS=	-Wall -Wextra -ansi -pedantic

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

all:		$(NAME)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
