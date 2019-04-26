/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** check mouse and draw cursor
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void check_mouse_pos(game_t *game)
{
    game->settings->cursor_pos.x =
    sfMouse_getPositionRenderWindow(game->settings->window).x;
    game->settings->cursor_pos.y =
    sfMouse_getPositionRenderWindow(game->settings->window).y;
}

void set_cursor_pos2(game_scene_t scene, game_setting_t *settings)
{
    if (settings->current == VICTORY) {
        scene.objs[CURSOR_O_S6].position = settings->cursor_pos;
        sfSprite_setPosition(scene.objs[CURSOR_O_S6].sprite,
        scene.objs[CURSOR_O_S6].position);
    }
    if (settings->current == DEFEAT) {
        scene.objs[CURSOR_O_S7].position = settings->cursor_pos;
        sfSprite_setPosition(scene.objs[CURSOR_O_S7].sprite,
        scene.objs[CURSOR_O_S7].position);
    }
}

void set_cursor_pos(game_scene_t scene, game_setting_t *settings)
{
    if (settings->current == MAIN_MENU) {
        scene.objs[CURSOR_O_S0].position = settings->cursor_pos;
        sfSprite_setPosition(scene.objs[CURSOR_O_S0].sprite,
        scene.objs[CURSOR_O_S0].position);
    }
    if (settings->current == TOWN) {
        scene.objs[CURSOR_O_S1].position = settings->cursor_pos;
        sfSprite_setPosition(scene.objs[CURSOR_O_S1].sprite,
        scene.objs[CURSOR_O_S1].position);
    }
    if (settings->current == BOSS) {
        scene.objs[CURSOR_O_S2].position = settings->cursor_pos;
        sfSprite_setPosition(scene.objs[CURSOR_O_S2].sprite,
        scene.objs[CURSOR_O_S2].position);
    }
    if (settings->current == FOREST) {
        scene.objs[CURSOR_O_S3].position = settings->cursor_pos;
        sfSprite_setPosition(scene.objs[CURSOR_O_S3].sprite,
        scene.objs[CURSOR_O_S3].position);
    }
    if (settings->current == BEACH) {
        scene.objs[CURSOR_O_S4].position = settings->cursor_pos;
        sfSprite_setPosition(scene.objs[CURSOR_O_S4].sprite,
        scene.objs[CURSOR_O_S4].position);
    }
    if (settings->current == CAMP) {
        scene.objs[CURSOR_O_S5].position = settings->cursor_pos;
        sfSprite_setPosition(scene.objs[CURSOR_O_S5].sprite,
        scene.objs[CURSOR_O_S5].position);
    }
    set_cursor_pos2(scene, settings);
}

void draw_cursor2(game_scene_t scene, game_setting_t *settings)
{
    if (settings->current == VICTORY)
        sfRenderWindow_drawSprite(settings->window, scene.objs[CURSOR_O_S6].
        sprite, NULL);
    if (settings->current == DEFEAT)
        sfRenderWindow_drawSprite(settings->window, scene.objs[CURSOR_O_S7].
        sprite, NULL);
}

void draw_cursor(game_scene_t scene, game_setting_t *settings)
{
    if (settings->current == MAIN_MENU)
        sfRenderWindow_drawSprite(settings->window, scene.objs[CURSOR_O_S0].
        sprite, NULL);
    if (settings->current == TOWN)
        sfRenderWindow_drawSprite(settings->window, scene.objs[CURSOR_O_S1].
        sprite, NULL);
    if (settings->current == BOSS)
        sfRenderWindow_drawSprite(settings->window, scene.objs[CURSOR_O_S2].
        sprite, NULL);
    if (settings->current == FOREST)
        sfRenderWindow_drawSprite(settings->window, scene.objs[CURSOR_O_S3].
        sprite, NULL);
    if (settings->current == BEACH)
        sfRenderWindow_drawSprite(settings->window, scene.objs[CURSOR_O_S4].
        sprite, NULL);
    if (settings->current == CAMP)
        sfRenderWindow_drawSprite(settings->window, scene.objs[CURSOR_O_S5].
        sprite, NULL);
    draw_cursor2(scene, settings);
}
