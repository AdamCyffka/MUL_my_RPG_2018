##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

NAME	= 	my_rpg

CC		= 	gcc

RM		= 	rm -f

SRCS	= 	src/main.c								\
			src/create_game2.c 						\
			src/create_game.c						\
			src/destroy_all.c						\
			src/my_rpg.c							\
			src/player_move.c						\
			src/player_attack.c						\
			src/new_content2.c						\
			src/new_content.c						\
			src/button_event.c 						\
			src/quests_interaction.c				\
			src/keyboard_checker.c 					\
			src/main_menu/button_main_menu.c		\
			src/main_menu/change_main_menu.c		\
			src/fill_scene/fill_scene_beach.c		\
			src/fill_scene/fill_scene_boss.c		\
			src/fill_scene/fill_scene_camp.c		\
			src/fill_scene/fill_scene_forest.c	 	\
			src/fill_scene/fill_scene_main_menu.c	\
			src/fill_scene/fill_scene_town1.c		\
			src/fill_scene/fill_scene_town2.c	    \
			src/fill_scene/fill_scene_vic_def.c	   	\

OBJS	= $(SRCS:.c=.o)

CFLAGS = -Iinclude
CFLAGS += -L./lib/printf -lprintf
CFLAGS += -lcsfml-system -lcsfml-audio -lcsfml-graphics -lcsfml-window
CFLAGS += -W -Wall -Wextra -g

LDFLAGS = -L./lib/printf -lprintf
LDFLAGS += -lcsfml-system -lcsfml-audio -lcsfml-graphics -lcsfml-window
LDFLAGS += -W -Wall -Wextra -g

all: mklib $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)
	cd lib/printf && make clean

fclean: clean
	$(RM) $(NAME)
	$(RM) *~ -f $(NAME)
	$(RM) *# -f $(NAME)
	cd lib/printf && make fclean

mklib:
	cd lib/printf && make

re	: 	fclean all

.PHONY	: 	all clean fclean re
