/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** rpg.h
*/

#ifndef RPG_H_
#define RPG_H_

#include "printf.h"
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <SFML/Window.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>

int main(int ac, char **av, char **env);
int my_rpg(window_t *params);
void init_params(window_t *params);
void init_window(window_t *params);

//fill_scene
void fill_scene_exit(game_scene_t exit_menu);
void fill_scene_me(game_scene_t me_menu);
void fill_scene_menu2(game_scene_t main_menu);
void fill_scene_menu1(game_scene_t main_menu);
void fill_scene_player(game_scene_t player);
void fill_scene_option(game_scene_t option_menu);
void fill_scene_forest(game_scene_t forest);
void fill_scene_beach(game_scene_t beach);
void fill_scene_map(game_scene_t map);
void fill_scene_town2(game_scene_t town);
void fill_scene_town1(game_scene_t town);

#endif /* RPG_H_ */
