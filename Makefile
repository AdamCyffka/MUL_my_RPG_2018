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

SRC_MAIN =	./src/main.c

SRC		=	./src/my_rpg.c								\
			./src/analyser.c 							\
			./src/play_sounds.c 						\
			./src/cursor_interaction.c 					\
			./src/cursor_interaction2.c 				\
			./src/inventory/draw_inventory.c			\
			./src/inventory/event_inventory.c			\
			./src/stats/draw_player_info.c				\
			./src/set_scale.c 							\
			./src/clock.c 								\
			./src/quests/draw_quest.c					\
			./src/quests/quests_rewards.c				\
			./src/lib_functions/my_libc_functions.c 	\
			./src/lib_functions/my_libc_functions2.c	\
			./src/lib_functions/my_libc_functions3.c	\
			./src/new_content/new_content2.c			\
			./src/new_content/new_content.c				\
			./src/create_game/create_quest.c			\
			./src/create_game/create_inventory.c		\
			./src/create_game/create_scene.c 			\
			./src/create_game/create_stat_setting.c 	\
			./src/create_game/create_game.c				\
			./src/buttons/state_menu.c 					\
			./src/buttons/disp_keyboard_menu.c 			\
			./src/buttons/button_options.c 				\
			./src/buttons/button_event.c				\
			./src/buttons/button_main_menu.c 			\
			./src/buttons/menu/button_close.c			\
			./src/buttons/menu/button_close2.c			\
			./src/buttons/menu/button_exit.c 			\
			./src/buttons/menu/button_exit2.c 			\
			./src/buttons/menu/button_inventory.c		\
			./src/buttons/menu/button_inventory2.c		\
			./src/buttons/menu/button_me.c 				\
			./src/buttons/menu/button_me2.c 			\
			./src/buttons/menu/button_option.c 			\
			./src/buttons/menu/button_option2.c 		\
			./src/buttons/button_ui_ig.c 				\
			./src/buttons/other_options.c 				\
			./src/buttons/volume_management.c 			\
			./src/change/change_view.c					\
			./src/change/change_main_menu.c				\
			./src/change/change_maps.c 					\
			./src/change/change_selection_maps.c 		\
			./src/change/change_vic_def.c 				\
			./src/change/change_statics_pos.c			\
			./src/player/player_move.c					\
			./src/player/player_change_map.c			\
			./src/player/player_attack.c				\
			./src/player/player_rect.c					\
			./src/player/player_interaction.c			\
			./src/player/player_data_refresh.c			\
			./src/enemies/enemies_die.c					\
			./src/enemies/enemies_moves.c				\
			./src/enemies/enemies_positions.c			\
			./src/enemies/enemies_attack.c				\
			./src/enemies/enemies_rect.c				\
			./src/enemies/boss.c						\
			./src/fill_scene/fill_scene_beach.c			\
			./src/fill_scene/fill_scene_beach1.c		\
			./src/fill_scene/fill_scene_boss.c			\
			./src/fill_scene/fill_scene_boss1.c			\
			./src/fill_scene/fill_scene_camp.c			\
			./src/fill_scene/fill_scene_camp1.c			\
			./src/fill_scene/fill_scene_forest.c		\
			./src/fill_scene/fill_scene_forest1.c		\
			./src/fill_scene/fill_scene_main_menu.c		\
			./src/fill_scene/fill_scene_town1.c			\
			./src/fill_scene/fill_scene_town2.c	   		\
			./src/fill_scene/fill_scene_town3.c	   		\
			./src/fill_scene/fill_scene_vic_def.c		\
			./src/fill_quest/fill_quest0_4.c			\
			./src/fill_quest/fill_quest5_9.c			\
			./src/fill_quest/fill_quest10_12.c			\
			./src/assets_load/assets_load.c				\
			./src/assets_load/assets_load_scenes.c		\
			./src/assets_load/assets_load_inventory.c	\
			./src/assets_load/assets_load_quests.c		\
			./src/assets_load/assets_load_stats.c		\
			./src/particules/particule_stars.c			\
			./src/particules/particule_leaf_green.c		\
			./src/particules/particule_leaf_orange.c	\
			./src/particules/particule_leaf_pink.c		\
			./src/destroy/destroy_all.c					\
			./src/destroy/destroy_quests.c				\
			./src/destroy/destroy_inventory.c			\
			./src/destroy/destroy_scenes.c				\
			./src/destroy/destroy_stats.c				\
			./src/destroy/destroy_settings.c			\
			./src/save/load_game.c 						\
			./src/save/save_game.c 						\
			./src/npc/npc_interaction.c 				\
			./src/npc/quest_action.c 					\
			./src/npc/player_interacting.c 				\
			./src/npc/dick_move.c						\
			./src/text_input/write_text.c

SRC_TEST	= 	./tests/my_putstr_test.c \
				./tests/my_strlen_test.c

OBJS    =	$(SRC:.c=.o) \
			$(SRC_MAIN:.c=.o)

## ========================================================================== ##
#								 PROJECT VARIABLES 							   #
## ========================================================================== ##

NAME	=	my_rpg

TEST_NAME = units

MFLAG 	=	-lm

GFLAG 	=	-lcsfml-system -lcsfml-audio -lcsfml-graphics -lcsfml-window \
$(MFLAG)

IFLAG	=	-Iinclude/ $(GFLAG)

CFLAGS  =	-W -Wall -Wextra $(IFLAG)

CC      =	gcc $(CFLAGS)

TEST_FLAGS = -I ./include/ -lcriterion --coverage

## ========================================================================== ##
#								 PROJECT RULES 								   #
## ========================================================================== ##

all		:	$(NAME)
			@$(ECHO) "$(GREEN)$(WHITE)"
			@$(ECHO) "$(GREEN)  [$(WHITE)MY_RPG$(GREEN)] → $(WHITE)Compilation \
completed. $ Binary : $(CYAN) ./$(NAME)"

$(NAME)	:	$(OBJS)
			@$(ECHO) "$(GREEN)\n> Compiling project\t >>>>> \t DONE\n$(WHITE)"
			@$(CC) -o $(NAME) $(OBJS) $(LDFLAGS)

tests_run:
	$(CC) $(SRC) $(SRC_TEST) -o $(TEST_NAME) $(TEST_FLAGS)
	./$(TEST_NAME)

show_coverage:
	$(CC) $(SRC_TEST) $(SRC) -o $(TEST_NAME) $(TEST_FLAGS)
	./units
	lcov --directory ./ -c -o rapport.info
	genhtml -o ./report -t "code coverage report" rapport.info
	xdg-open ./report/index.html &>/dev/null

wc:
	wc $(SRC) $(SRC_MAIN) $(SRCS_TEST) ./include/*

clean	:
			@$(RM) $(OBJS)
			@$(RM) ./*.gcda
			@$(RM) ./*.gcno
			@$(RM) rapport.info
			@$(RM) ./report
			@$(ECHO) "$(GREEN)\n> Cleaning repository\t >>>>> \t DONE\n$(WHITE)"

fclean	: 	clean
			@$(RM) $(NAME)
			@$(RM) $(TEST_NAME)
			@$(ECHO) "$(GREEN)\n> Cleaning exec\t\t >>>>> \t DONE\n$(WHITE)"

re		:	fclean all

debug 	:	CFLAGS += -g
debug 	:	re

.c.o	:
			@$(CC) -c $< -o $@
			@$(ECHO) "$(GREEN)[OK] > $<\t \t $(WHITE)"
