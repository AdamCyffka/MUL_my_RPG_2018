/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** struct.h
*/

#ifndef STRUCT_H_
#define STRUCT_H_

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <SFML/Window.h>
#include "define.h"

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
    int volume;
    sfBool _loop;
    bool _activated;
} game_sound_t;

typedef struct game_text {
    int state;
    sfText *text;
    sfFont *font;
    sfVector2f position;
} game_text_t;

typedef struct game_scene {
    game_object_t *objs;
    game_sound_t *sounds;
    game_button_t *buttons;
    game_text_t *texts;
    int *how_many;
} game_scene_t;

typedef struct game_inventory {
    game_button_t item;
    bool _selected;
    int content;
    int state;
} game_inventory_t;

typedef struct game_quest {
    game_text_t statement_text;
    game_text_t *dialogs_text;
    int current_dial;
    int npc_zone;
    int nb_of_dial;
    int progress;
    int nb_of_task;
    int *rewards;
    int state;
} game_quest_t;

typedef struct game_stat {
    int xp;
    int life;
    game_text_t xp_t;
    game_text_t life_t;
    game_text_t name_t;
    int current_quest;
    bool _mov_allowed;
    game_object_t player;
} game_stat_t;

typedef struct timer_clock {
    float main_menu;
    float player_timer;
    float enemies_timer;
    float enemies_attack;
    float timer2;
    float timer3;
    float walk;
    float dick;
} timer_clock_t;

typedef struct game_setting {
    int current;
    sfRenderWindow *window;
    sfVector2f map_position;
    sfVector2f cursor_pos;
    bool _mouse;
    sfClock *clock;
    timer_clock_t timers;
    float last_time;
    float delta_time;
    bool _paused;
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

#endif /* STRUCT_H_ */
