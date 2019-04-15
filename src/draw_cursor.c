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
    game->settings->cursor_pos.x = game->settings->event.mouseMove.x;
    game->settings->cursor_pos.y = game->settings->event.mouseMove.y;
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
