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
int my_rpg(void);

//fill_scene
void fill_scene_beach1(game_scene_t beach);
void fill_scene_beach2(game_scene_t beach);
void fill_scene_beach3(game_scene_t beach);
void fill_scene_boss1(game_scene_t boss);
void fill_scene_boss2(game_scene_t boss);
void fill_scene_boss3(game_scene_t boss);
void fill_scene_camp1(game_scene_t camp);
void fill_scene_camp2(game_scene_t camp);
void fill_scene_camp3(game_scene_t camp);
void fill_scene_forest1(game_scene_t forest);
void fill_scene_forest2(game_scene_t forest);
void fill_scene_main_menu1(game_scene_t main_menu);
void fill_scene_main_menu2(game_scene_t main_menu);
void fill_scene_main_menu3(game_scene_t main_menu);
void fill_scene_town1(game_scene_t town);
void fill_scene_town2(game_scene_t town);
void fill_scene_town3(game_scene_t town);
void fill_scene_town4(game_scene_t town);

#endif /* RPG_H_ */
