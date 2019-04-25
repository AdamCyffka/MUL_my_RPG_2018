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
    if (settings->current == victory) {
        scene.objs[CURSOR_O_S6].position = settings->cursor_pos;
        sfSprite_setPosition(scene.objs[CURSOR_O_S6].sprite,
        scene.objs[CURSOR_O_S6].position);
    }
    if (settings->current == defeat) {
        scene.objs[CURSOR_O_S7].position = settings->cursor_pos;
        sfSprite_setPosition(scene.objs[CURSOR_O_S7].sprite,
        scene.objs[CURSOR_O_S7].position);
    }
}

void set_cursor_pos(game_scene_t scene, game_setting_t *settings)
{
    if (settings->current == main_menu) {
        scene.objs[CURSOR_O_S0].position = settings->cursor_pos;
        sfSprite_setPosition(scene.objs[CURSOR_O_S0].sprite,
        scene.objs[CURSOR_O_S0].position);
    }
    if (settings->current == town) {
        scene.objs[CURSOR_O_S1].position = settings->cursor_pos;
        sfSprite_setPosition(scene.objs[CURSOR_O_S1].sprite,
        scene.objs[CURSOR_O_S1].position);
    }
    if (settings->current == boss) {
        scene.objs[CURSOR_O_S2].position = settings->cursor_pos;
        sfSprite_setPosition(scene.objs[CURSOR_O_S2].sprite,
        scene.objs[CURSOR_O_S2].position);
    }
    if (settings->current == forest) {
        scene.objs[CURSOR_O_S3].position = settings->cursor_pos;
        sfSprite_setPosition(scene.objs[CURSOR_O_S3].sprite,
        scene.objs[CURSOR_O_S3].position);
    }
    if (settings->current == beach) {
        scene.objs[CURSOR_O_S4].position = settings->cursor_pos;
        sfSprite_setPosition(scene.objs[CURSOR_O_S4].sprite,
        scene.objs[CURSOR_O_S4].position);
    }
    if (settings->current == camp) {
        scene.objs[CURSOR_O_S5].position = settings->cursor_pos;
        sfSprite_setPosition(scene.objs[CURSOR_O_S5].sprite,
        scene.objs[CURSOR_O_S5].position);
    }
    set_cursor_pos2(scene, settings);
}

void draw_cursor2(game_scene_t scene, game_setting_t *settings)
{
    if (settings->current == victory)
        sfRenderWindow_drawSprite(settings->window, scene.objs[CURSOR_O_S6].
        sprite, NULL);
    if (settings->current == defeat)
        sfRenderWindow_drawSprite(settings->window, scene.objs[CURSOR_O_S7].
        sprite, NULL);
}

void draw_cursor(game_scene_t scene, game_setting_t *settings)
{
    if (settings->current == main_menu)
        sfRenderWindow_drawSprite(settings->window, scene.objs[CURSOR_O_S0].
        sprite, NULL);
    if (settings->current == town)
        sfRenderWindow_drawSprite(settings->window, scene.objs[CURSOR_O_S1].
        sprite, NULL);
    if (settings->current == boss)
        sfRenderWindow_drawSprite(settings->window, scene.objs[CURSOR_O_S2].
        sprite, NULL);
    if (settings->current == forest)
        sfRenderWindow_drawSprite(settings->window, scene.objs[CURSOR_O_S3].
        sprite, NULL);
    if (settings->current == beach)
        sfRenderWindow_drawSprite(settings->window, scene.objs[CURSOR_O_S4].
        sprite, NULL);
    if (settings->current == camp)
        sfRenderWindow_drawSprite(settings->window, scene.objs[CURSOR_O_S5].
        sprite, NULL);
    draw_cursor2(scene, settings);
}
