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

//fill_quest
void fill_quest0(game_quest_t quest0);
void fill_quest1(game_quest_t quest1);
void fill_quest2(game_quest_t quest2);
void fill_quest3(game_quest_t quest3);
void fill_quest4(game_quest_t quest4);
void fill_quest5(game_quest_t quest5);
void fill_quest6(game_quest_t quest6);
void fill_quest7(game_quest_t quest7);
void fill_quest8(game_quest_t quest8);
void fill_quest9(game_quest_t quest9);
void fill_quest10(game_quest_t quest10);
void fill_quest11(game_quest_t quest11);
void fill_quest12(game_quest_t quest12);

//create_game
game_t *create_game();
void create_scenes(game_scene_t *scenes);
void create_inventory(game_inventory_t *inventory);
void create_quests(game_quest_t *quests);
void create_stats(game_stat_t *stats);
void create_settings(game_setting_t *settings);

//change
void print_all_main_menu(game_scene_t scene, game_setting_t *settings);
void move_sprite_main_menu(game_scene_t *scene, float delta_time);
void change_main_menu(game_setting_t *settings, game_scene_t *scene);

//buttons
int button_is_clicked(game_setting_t *settings, sfVector2f pos,
sfVector2f size);
void disp_button_menu(game_scene_t scenes, int enable, int disable);
void button_menu(game_setting_t *settings, game_scene_t scenes);
void button_hover(game_scene_t scenes, game_setting_t *settings, int nbr);

//save
int save_player_stats(game_t *game);
int load_player_stats(game_t *game);

//buttons
void button_town(game_setting_t *settings, game_scene_t scenes);

//quest_interaction
void quests_interaction(void);

//play_sounds
void check_bg_music(game_t *game);

//destroy
//void destroy_all(game_t *game);

//player
void key_to_move_or_not(game_scene_t scenes, game_setting_t *settings, game_stat_t *stats);
void move_player(game_setting_t *settings, game_stat_t *stats);
void player_stop_moving(game_stat_t *stats);
void player_attack(game_stat_t *stats);
int player_is_on_rectangle(game_setting_t *settings, game_stat_t *stat, game_scene_t scene);

//analyser
void analyse_events(game_t *game);
void keyboard_checker(game_t *game);

//draw_cursor
void draw_cursor(game_scene_t scene, game_setting_t *settings);
void check_mouse_pos(game_t *game);

//draw_quest
void draw_quest(game_quest_t *quests, game_setting_t *settings);

//set_scale
void set_scale(game_t *game);

//clock
void clock(game_scene_t *scene, game_setting_t *settings, game_quest_t *quests);

//change_maps
void change_maps(game_t *game);
void change_vic_def(game_t *game);
void change_town(game_setting_t *settings, game_scene_t scenes);
void change_boss(void);
void change_forest(void);
void change_beach(void);
void change_camp(void);
void change_victory(void);
void change_defeat(void);

//basic functions
int my_strlen(char const *str);
char *my_itoa(int nb);
char *my_strcpy(char *str, char *dest);

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
game_quest_t new_quest(int nb_dial, char *statement, int nb_of_task,
int nb_reward);

//TEST A RETIRER A LA FIN
void test_quest(game_quest_t *quests);

#endif /* RPG_H_ */
