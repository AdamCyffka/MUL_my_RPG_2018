/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** rpg.h
*/

#ifndef RPG_H_
#define RPG_H_

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

//create_game
game_t *create_game();
int create_scenes(game_scene_t *scenes);
int create_inventory(game_inventory_t *inventory);
int create_quests(game_quest_t *quests);
int create_stats(game_stat_t *stats);
int create_settings(game_setting_t *settings);

//change
void print_all_main_menu(game_scene_t scene, game_setting_t *settings);
void move_sprite_main_menu(game_setting_t *settings, game_scene_t *scene,
float delta_time);
void change_main_menu(game_setting_t *settings, game_scene_t *scene,
game_stat_t *stats);
void change_view_main_menu(game_setting_t *settings);

//buttons
int button_is_clicked(game_setting_t *settings, sfVector2f pos,
sfVector2f size);
void disp_button_menu(game_scene_t scenes, int enable, int disable);
void button_menu(game_setting_t *settings, game_scene_t scenes,
game_stat_t *stats);
void button_hover(game_scene_t scenes, game_setting_t *settings, int nbr);

//save

//buttons
void all_button(game_inventory_t *inventory, game_setting_t *settings,
game_scene_t *scenes, game_stat_t *stats);
void button_inventory1(game_inventory_t *inventory, game_scene_t *scenes,
int enable, int disable);
void button_option1(game_inventory_t *inventory, game_scene_t *scenes,
int enable, int disable);
void button_exit1(game_inventory_t *inventory, game_scene_t *scenes,
int enable, int disable);
void button_me1(game_inventory_t *inventory, game_scene_t *scenes,
int enable, int disable);
void button_close1(game_inventory_t *inventory, game_scene_t *scenes,
int enable, int disable);

//quest_interaction
void quests_interaction(void);
void quest_action(game_t *game);
void quest_speak(game_t *game);
void quest_validation(game_t *game);
void player_is_interacting(game_scene_t *scenes, game_stat_t *stats,
game_setting_t *settings, game_quest_t *quests);


//play_sounds
void stop_desactivated_music(game_t *game);

//destroy
void destroy_all(game_t *game);
void destroy_window(game_t *game);
void destroy_texts(game_t *game, int nbr);
void destroy_buttons(game_t *game, int nbr);
void destroy_sounds(game_t *game, int nbr);
void destroy_objs(game_t *game, int nbr);
void destroy_views(game_t *game);
void destroy_clock(game_t *game);

//player
void key_to_move_or_not(game_scene_t scenes,
game_setting_t *settings, game_stat_t *stats, game_inventory_t *inventory);
void move_player(game_setting_t *settings, game_stat_t *stats,
game_inventory_t *inventory);
void player_stop_moving(game_stat_t *stats, game_setting_t *settings);
void player_attack(game_stat_t *stats);
int player_is_on_rectangle(game_stat_t *stat, game_scene_t scene);
void player_rect_move(game_scene_t *scenes, game_stat_t *stats,
game_setting_t *settings);
int player_pos_view(sfVector2f vector_view, game_stat_t *stats);
void change_vector_view(game_setting_t *settings, sfVector2f vector_view);
void player_change_map(game_stat_t *stats, game_quest_t *quests,
game_setting_t *settings);
void player_interaction(game_t *game);
void play_song_walk(game_scene_t scenes, game_setting_t *settings);
int equiped_or_not(game_inventory_t *inventory, int item);

//analyser
void analyse_events(game_t *game);

//draw_cursor
void check_mouse_pos(game_t *game);
void set_cursor_pos(game_scene_t scene, game_setting_t *settings);
void draw_cursor(game_scene_t scene, game_setting_t *settings);

//draw_quest
void draw_quest(game_quest_t *quests, game_setting_t *settings);

//draw_inventory
void draw_inventory(game_scene_t *scene, game_inventory_t *inventory,
game_setting_t *settings);

//draw_player_info
void draw_player_info(game_t *game);

//set_scale
void set_scale(game_t *game);

//clock
void clock(game_scene_t *scene, game_setting_t *settings);

//change_maps
void change_maps(game_t *game);
void change_vic_def(game_t *game);
void change_town(game_t *game);
void change_boss(game_setting_t *settings, game_scene_t scene);
void change_forest(game_setting_t *settings, game_scene_t scene);
void change_beach(game_setting_t *settings, game_scene_t scene);
void change_camp(game_setting_t *settings, game_scene_t scene);
void change_victory(game_t *game);
void change_defeat(game_t *game);

//change_statics_pos
void change_statics_pos_town(game_scene_t scene, game_setting_t *settings);
void change_statics_pos_boss(game_scene_t scene, game_setting_t *settings);
void change_statics_pos_forest(game_scene_t scene, game_setting_t *settings);
void change_statics_pos_beach(game_scene_t scene, game_setting_t *settings);
void change_statics_pos_camp(game_scene_t scene, game_setting_t *settings);

//basic functions
int my_strlen(char const *str);
char *my_itoa(int nb);
char *my_strcpy(char *str, char *dest);
void my_putstr(char *str);
void my_putchar(char c);
int my_strcmp(char const *str1, char const *str2);
char *my_stradd(const char *str, char toadd);
char *my_strrem(const char *str);
char *my_getstr(int nb);

//new_content
game_scene_t new_scene(int nb_objs, int nb_musics, int nb_buttons,
int nb_texts);
game_text_t new_text(const char *path_to_font, const char *towrite,
sfVector2f pos,  int size);
game_button_t new_button(const char *path_to_img,
sfVector2f pos, sfIntRect rect, int state);
game_sound_t new_sound(const char *path_to_sound, sfBool state, float volume,
bool _activated);
game_object_t new_object(const char *path_to_spsheet, sfVector2f pos,
sfIntRect rect, float speed);
game_quest_t new_quest(int nb_dial, char *statement, int nb_of_task,
int nb_reward);
game_inventory_t new_slot(sfVector2f position, bool _selected);

//npc_interaction.c
void npc_interaction(game_t *game);

//enemies_positions.c
void enemies_positions(game_t *game, int tmp, float delta_time);
void enemies_detect_player(game_t *game);
void enemies_detect_hit(game_t *game);
void loop_rect_enemies(game_t *game);
void move_rect_enemies(game_scene_t *scenes,
game_stat_t *stats, int tmp, game_setting_t *settings);
void enemies_attack_player(game_t *game);
void rect_chose(sfVector2f vector, game_t *game, int tmp);

//music
void set_music(game_t *game);

//write_text.c
int text_entered(game_setting_t *settings);
int enter_quest_answer(game_text_t quest_answer, game_setting_t *settings);
void enter_player_name(game_stat_t *stats, game_setting_t *settings);

//quests_reward
void pick_up_item(game_t *game);
void give_rewards_if_validated(game_stat_t *stats, game_quest_t *quests,
game_inventory_t *inventory);

//inventory
void fill_inventory(game_inventory_t *inventory, int content);
void delete_item_inventory(game_inventory_t *inventory, int reward);
void change_item_texture(game_inventory_t *inventory, char const *path,
int reward, int tmp);
void swap_pos_inventory(game_inventory_t *inventory, int tmp, int i);
void change_my_selected(game_inventory_t *inventory, game_setting_t *settings,
int tmp);

//PARTICULES
void particules_move_green(game_t *game);
void particules_move_pink(game_t *game);
void particules_move_orange(game_t *game);
void particules_star(game_t *game);

//refresh_player_data.c
void refresh_player_data(game_stat_t *stats);

//DICK
void dick_move_to_spawn(game_t *game);

//BOSS
void change_view_boss(game_setting_t *settings);

//options_menu
void button_victory(game_setting_t *settings, game_scene_t *scenes,
game_stat_t *stats);
void button_defeat(game_setting_t *settings, game_scene_t *scenes,
game_stat_t *stats);
int btn_snd_four(game_scene_t *scenes, game_setting_t *settings);
int btn_snd_three(game_scene_t *scenes, game_setting_t *settings);
int btn_snd_two(game_scene_t *scenes, game_setting_t *settings);
int btn_snd_one(game_scene_t *scenes, game_setting_t *settings);
int frame_to_60(game_setting_t *settings);
int frame_to_30(game_setting_t *settings);
int vsync_on(game_setting_t *settings);
int vsync_off(game_setting_t *settings);
void buttons_action_volume(game_setting_t *settings, game_scene_t *scenes);
void buttons_action_option(game_setting_t *settings, game_scene_t *scenes);
void buttons_action_exit(game_inventory_t *inventory, game_setting_t *settings,
game_scene_t *scenes, game_stat_t *stats);
void buttons_action_title(game_inventory_t *inventory, game_setting_t *settings,
game_scene_t *scenes, game_stat_t *stats);
void state_men_button(game_scene_t scenes, int but);
void men_game_button(game_setting_t *settings, game_scene_t scenes, int nbr);
void disp_new_options(game_scene_t scenes, int enable, int disable);
void disp_button_menu(game_scene_t scenes, int enable, int disable);
void disp_button_back(game_scene_t scenes, int enable, int disable);
void button_close7(game_inventory_t *inventory, game_scene_t *scenes,
int enable, int disable);
void button_close6(game_inventory_t *inventory, game_scene_t *scenes,
int enable, int disable);
void button_exit7(game_scene_t *scenes, int enable, int disable);
void button_exit6(game_inventory_t *inventory, game_scene_t *scenes,
int enable, int disable);
void button_inventory6(game_inventory_t *inventory, game_scene_t *scenes,
int enable, int disable);
void button_option6(game_inventory_t *inventory, game_scene_t *scenes,
int enable, int disable);
void button_option7(game_inventory_t *inventory, game_scene_t *scenes,
int enable, int disable);
void button_me7(game_inventory_t *inventory, game_scene_t *scenes,
int enable, int disable);
void button_me6(game_inventory_t *inventory, game_scene_t *scenes,
int enable, int disable);

void teleport_player_boss(game_t *game);

//save
int load_save(int fd_player);
int save_game(save_t *player);

//assets_load
int assets_load(game_t *game);
int assets_load_scenes(game_scene_t *scenes);
int assets_load_inventory(game_inventory_t *inventory);
int assets_load_quests(game_quest_t *quests);
int assets_load_stats(game_stat_t *stats);

#endif /* RPG_H_ */