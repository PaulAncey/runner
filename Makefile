##
## EPITECH PROJECT, 2020
## makefile
## File description:
## task02
##

SRC	=	my_printf/printf_letter1.c	\
		my_printf/printf_letter2.c	\
		my_printf/my_printf.c	\
		my_printf/printf_my_put_all.c	\
		my_printf/printf_my_put_all2.c	\
		do_smth.c	\
		my_runner.c	\
		anime_sprite.c	\
		background_1.c	\
		background_2.c	\
		init_runner.c	\
		init_runner_2.c	\
		map_song_score.c	\
		moove_sp.c	\


OBJ	=	$(SRC:.c=.o)

NAME	=	my_runner

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(SRC) -g3 -l csfml-graphics -l csfml-window -l csfml-system -l csfml-audio

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(NAME)

re:	fclean all
