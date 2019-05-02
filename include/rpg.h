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
void fill_quest0(game_quest_t *quest0);
void fill_quest1(game_quest_t *quest1);
void fill_quest2(game_quest_t *quest2);
void fill_quest3(game_quest_t *quest3);
void fill_quest4(game_quest_t *quest4);
void fill_quest5(game_quest_t *quest5);
void fill_quest6(game_quest_t *quest6);
void fill_quest7(game_quest_t *quest7);
void fill_quest8(game_quest_t *quest8);
void fill_quest9(game_quest_t *quest9);
void fill_quest10(game_quest_t *quest10);
void fill_quest11(game_quest_t *quest11);
void fill_quest12(game_quest_t *quest12);

//create_game
game_t *create_game();
void create_scenes(game_scene_t *scenes);
void create_inventory(game_inventory_t *inventory);
void create_quests(game_quest_t *quests);
void create_stats(game_stat_t *stats);
void create_settings(game_setting_t *settings);

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
int save_player_stats(game_t *game);
int load_player_stats(game_t *game);

//buttons
void all_button(game_setting_t *settings, game_scene_t *scenes,
game_stat_t *stats);
void button_inventory1(game_scene_t *scenes, int enable, int disable);
void button_option1(game_scene_t *scenes, int enable, int disable);
void button_exit1(game_scene_t *scenes, int enable, int disable);
void button_me1(game_scene_t *scenes, int enable, int disable);
void button_close1(game_scene_t *scenes, int enable, int disable);

//quest_interaction
void quests_interaction(void);

//play_sounds
void check_bg_music(game_t *game);

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
game_setting_t *settings, game_stat_t *stats);
void move_player(game_setting_t *settings, game_stat_t *stats);
void player_stop_moving(game_stat_t *stats, game_setting_t *settings);
void player_attack(game_stat_t *stats);
int player_is_on_rectangle(game_setting_t *settings, game_stat_t *stat,
game_scene_t scene);
void player_rect_move(game_scene_t *scenes, game_stat_t *stats,
game_setting_t *settings);
int player_pos_view(sfVector2f vector_view, game_stat_t *stats);
void change_vector_view(game_setting_t *settings, sfVector2f vector_view);
void player_change_map(game_stat_t *stats, game_quest_t *quests,
    game_setting_t *settings);
void player_interaction(game_t *game);
void play_song_walk(game_scene_t scenes, game_setting_t *settings);

//analyser
void analyse_events(game_t *game);

//draw_cursor
void check_mouse_pos(game_t *game);
void set_cursor_pos(game_scene_t scene, game_setting_t *settings);
void draw_cursor(game_scene_t scene, game_setting_t *settings);

//draw_quest
void draw_quest(game_quest_t *quests, game_setting_t *settings);

//draw_inventory
void draw_inventory(game_inventory_t *inventory, game_setting_t *settings);

//draw_player_info
void draw_player_info(game_t *game);

//set_scale
void set_scale(game_t *game);

//clock
void clock(game_scene_t *scene, game_setting_t *settings, game_quest_t *quests);

//change_maps
void change_maps(game_t *game);
void change_vic_def(game_t *game);
void change_town(game_t *game);
void change_boss(game_setting_t *settings,
game_scene_t scene, game_quest_t *quests);
void change_forest(game_setting_t *settings,
game_scene_t scene, game_quest_t *quests);
void change_beach(game_setting_t *settings,
game_scene_t scene, game_quest_t *quests);
void change_camp(game_setting_t *settings,
game_scene_t scene, game_quest_t *quests);
void change_victory(void);
void change_defeat(game_setting_t *settings);

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
game_sound_t new_sound(const char *path_to_sound, sfBool state, float volume);
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

//write_text.c
int text_entered(game_setting_t *settings);
void enter_quest_answer(game_text_t quest_answer, game_setting_t *settings);
void enter_player_name(game_stat_t *stats, game_setting_t *settings);

void fill_inventory(game_inventory_t *inventory, int content);
void change_item_texture(game_inventory_t *inventory, char const *path, 
int reward, int tmp);

//PARTICULES
void particules_move(game_t *game);

//refresh_player_data.c
void refresh_player_data(game_stat_t *stats);

#endif /* RPG_H_ */
