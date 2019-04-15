/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** rpg.h
*/

#ifndef RPG_H_
#define RPG_H_

#include "printf.h"
#include "struct.h"
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
void fill_scene_boss1(game_scene_t boss);
void fill_scene_forest1(game_scene_t forest);
void fill_scene_main_menu1(game_scene_t main_menu);
void fill_scene_camp1(game_scene_t camp);
void fill_scene_town1(game_scene_t town);
void fill_scene_town6(game_scene_t town);
void fill_scene_victory(game_scene_t victory);
void fill_scene_defeat(game_scene_t defeat);

//create_game
game_t *create_game();
void create_scenes(game_scene_t *scenes);
void create_inventory(game_inventory_t *inventory);
void create_quests(game_quest_t *quests);
void create_stats(game_stat_t *stats);
void create_settings(game_setting_t *settings);

//main_menu
void change_main_menu(game_setting_t *settings, game_scene_t *scene);
int button_is_clicked(game_setting_t *settings, sfVector2f pos,
sfVector2f size);
void utils_button_menu(game_scene_t scenes, int enable, int disable);
void button_menu(game_setting_t *settings, game_scene_t scenes);
void button_hover(game_scene_t scenes, game_setting_t *settings, int nbr);
int save_player_stats(game_t *game);
int load_player_stats(game_t *game);

//buttons
int button_new_game(game_t *game);
int load_game(game_t *game);
int button_save(game_t *game);

//print_main_menu
void print_all_main_menu(game_scene_t scene, game_setting_t *settings);
void move_sprite_main_menu(game_scene_t *scene);

//quest_interaction
void quests_interaction(void);

//destroy
void destroy_all(game_t *game);

//player_move
void key_to_move_or_not(game_scene_t scenes, game_setting_t *settings, game_stat_t *stats);
void move_player(game_setting_t *settings, game_stat_t *stats);
void player_stop_moving(game_stat_t *stats);

//player_attack
void player_attack(game_stat_t *stats);
int player_is_on_rectangle(game_setting_t *settings, game_stat_t *stat, game_scene_t scene);

//analyser
void analyse_events(game_t *game);
void keyboard_checker(game_t *game);

//draw_cursor
void draw_cursor(game_scene_t scene, game_setting_t *settings);
void check_mouse_pos(game_t *game);

//set_scale
void set_scale_town(game_scene_t scene, game_stat_t *stats, game_setting_t
*settings);

//clock
void clock(game_scene_t *scene, game_setting_t *settings);

//basic functions
int my_strlen(char const *str);
char *my_itoa(int nb);

//new_content
game_scene_t new_scene(int nb_objs, int nb_musics, int nb_buttons,
int nb_texts);
game_text_t new_text(const char *path_to_font, const char *towrite,
sfVector2f pos, int size);
game_button_t new_button(const char *path_to_img,
sfVector2f pos, sfIntRect rect, int state);
game_sound_t new_sound(const char *path_to_sound, sfBool state, float volume);
game_object_t new_object(const char *path_to_spsheet, sfVector2f pos,
sfIntRect rect, float speed);
game_quest_t new_quest(const char *quest_statement, bool _instant,
int nb_of_task, int *rewards_id);

#endif /* RPG_H_ */
