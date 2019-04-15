/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** struct.h
*/

#ifndef STRUCT_H_
#define STRUCT_H_

#define bool _Bool
#define true 1
#define false 0

#define SUCCESS 0
#define WRONG_PATH -2
#define WRONG_CONFIG_PATH -3

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <SFML/Window.h>

typedef struct game_object {
    int state;
    float speed;
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f position;
    sfIntRect rect;
} game_object_t;

typedef struct game_button {
    sfRectangleShape *shape;
    sfTexture *texture;
    sfVector2f position;
    sfIntRect rect;
    int state;
    int content;
    int action;
} game_button_t;

typedef struct game_sound {
    sfMusic *music;
    sfBool _loop;
    bool _activated;
} game_sound_t;

typedef struct game_text {
    int state;
    sfText *text;
    sfFont *font;
} game_text_t;

typedef struct game_scene {
    game_object_t *objs;
    game_sound_t *sounds;
    game_button_t *buttons;
    game_text_t *texts;
    int *how_many;
} game_scene_t;

typedef struct game_inventory {

} game_inventory_t;

typedef struct game_quest {
    char *quest_dialog;
    char *quest_statement;
    int progress;
    int nb_of_task;
    int *reward_id;
} game_quest_t;

typedef struct game_stat {
    int xp;
    int life;
    char *name;
    int current_quest;
    game_object_t player;
} game_stat_t;

typedef struct game_setting {
    int current;
    sfRenderWindow *window;
    sfVector2f map_position;
    sfVector2f cursor_pos;
    bool _mouse;
    sfClock *clock;
    sfView *map_view;
    sfEvent event;
} game_setting_t;

typedef struct game {
    game_scene_t *scenes;
    game_inventory_t *inventory;
    game_quest_t *quests;
    game_stat_t *stats;
    game_setting_t *settings;
} game_t;

typedef struct timer_clock {
    float main_menu;
    float timer2;
    float timer3;
} timer_clock_t;

#endif /* STRUCT_H_ */
