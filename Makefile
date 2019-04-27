##
## EPITECH PROJECT, 2019
## MUL_my_rpg_2018
## File description:
## Makefile
##

## ========================================================================== ##
#								 USEFUL VARIABLES 							   #
## ========================================================================== ##

RM      =	rm -rf
ECHO	=	echo -e

GREEN	=	\033[1;32m
WHITE	=	\033[0m
CYAN	=	\033[36;1m

## ========================================================================== ##
#								 SOURCES VARIABLES 							   #
## ========================================================================== ##

SRC		=	src/main.c								\
			src/create_game3.c 						\
			src/create_game2.c 						\
			src/create_game.c						\
			src/my_rpg.c							\
			src/new_content2.c						\
			src/new_content.c						\
			src/analyser.c 							\
			src/cursor_interaction.c 				\
			src/draw_quest.c						\
			src/draw_inventory.c					\
			src/set_scale.c 						\
			src/clock.c 							\
			src/my_libc_functions.c 				\
			src/npc_interaction.c 					\
			src/buttons/button_event.c 				\
			src/buttons/button_main_menu.c			\
			src/buttons/button_town.c 				\
			src/buttons/button_town2.c 				\
			src/change/change_main_menu.c			\
			src/change/change_maps.c 				\
			src/change/change_selection_maps.c 		\
			src/change/change_vic_def.c 			\
			src/change/change_statics_pos.c			\
			src/player/player_move.c				\
			src/player/player_change_map.c			\
			src/player/player_attack.c				\
			src/player/player_rect.c				\
			src/enemies/enemies_die.c				\
			src/enemies/enemies_moves.c				\
			src/enemies/enemies_positions.c			\
			src/fill_scene/fill_scene_beach.c		\
			src/fill_scene/fill_scene_boss.c		\
			src/fill_scene/fill_scene_camp.c		\
			src/fill_scene/fill_scene_forest.c	 	\
			src/fill_scene/fill_scene_main_menu.c	\
			src/fill_scene/fill_scene_town1.c		\
			src/fill_scene/fill_scene_town2.c	    \
			src/fill_scene/fill_scene_vic_def.c	   	\
			src/fill_quest/fill_quest0_4.c			\
			src/fill_quest/fill_quest5_9.c			\
			src/fill_quest/fill_quest10_12.c

OBJS    =	$(SRC:.c=.o)

## ========================================================================== ##
#								 PROJECT VARIABLES 							   #
## ========================================================================== ##

NAME	=	my_rpg

MFLAG 	=	-lm

GFLAG 	=	-lcsfml-system -lcsfml-audio -lcsfml-graphics -lcsfml-window $(MFLAG)

IFLAG	=	-Iinclude/ $(GFLAG)

CFLAGS  =	-W -Wall -Wextra -g $(IFLAG)

CC      =	gcc $(CFLAGS)

## ========================================================================== ##
#								 PROJECT RULES 								   #
## ========================================================================== ##

$(NAME)	:	$(OBJS)
			@$(ECHO) "$(GREEN)\n> Compiling project\t >>>>> \t DONE\n$(WHITE)"
			@$(CC) -o $(NAME) $(OBJS) $(LDFLAGS)

all		:	$(NAME)
			@$(ECHO) "$(GREEN)$(WHITE)"
			@$(ECHO) "$(GREEN)  [$(WHITE)MY_RPG$(GREEN)] → $(WHITE)Compilation completed. $ Binary : $(CYAN) ./$(NAME)"

clean	:
			@$(RM) $(OBJS)
			@$(ECHO) "$(GREEN)\n> Cleaning repository\t >>>>> \t DONE\n$(WHITE)"

fclean	: 	clean
			@$(RM) $(NAME)
			@$(ECHO) "$(GREEN)\n> Cleaning exec\t\t >>>>> \t DONE\n$(WHITE)"

re		:	fclean all

.c.o	:
			@$(CC) -c $< -o $@
			@$(ECHO) "$(GREEN)[OK] > $<\t \t $(WHITE)"