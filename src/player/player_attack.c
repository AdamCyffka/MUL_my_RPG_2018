/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** player_attack
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

int button_crossed(game_stat_t *stats, game_scene_t scenes, int nbr)
{
    int x = (int)stats->player.position.x;
    int y = (int)stats->player.position.y;
    sfVector2f pos = sfRectangleShape_getPosition(scenes.buttons[nbr].shape);
    sfVector2f size = sfRectangleShape_getSize(scenes.buttons[nbr].shape);

    if (sfKeyboard_isKeyPressed(sfKeyD))
        x += 4;
    if (sfKeyboard_isKeyPressed(sfKeyQ))
        x -= 4;
    if (sfKeyboard_isKeyPressed(sfKeyZ))
        y -= 4;
    if (sfKeyboard_isKeyPressed(sfKeyS))
        y += 4;
    if ((x >= pos.x && x <= pos.x + size.x)
        && (y >= pos.y - 120 && y <= pos.y - 120
        + size.y))
        return 1;
    else
        return 0;
}

int player_is_on_rectangle(game_stat_t *stats, game_scene_t scene)
{
    for (int tmp = 0; tmp < scene.how_many[2]; tmp++) {
        if (scene.buttons[tmp].state >= 0 &&
            button_crossed(stats, scene, tmp) == 1)
            return 1;
    }
    return 0;
}

void player_attack2(game_stat_t *stats)
{
    if (stats->player.rect.top == 32) {
        stats->player.rect.left = 0;
        stats->player.rect.top = 129;
        stats->player.rect.width = 32;
        stats->player.rect.height = 28;
        stats->player.position.y += 4;
    }
    if (stats->player.rect.top == 96) {
        stats->player.rect.left = 32;
        stats->player.rect.top = 129;
        stats->player.rect.width = 32;
        stats->player.rect.height = 28;
        stats->player.position.y += 4;
        stats->player.position.x -= 80;
    }
    sfSprite_setPosition(stats->player.sprite, stats->player.position);
    sfSprite_setTextureRect(stats->player.sprite, stats->player.rect);
}

void player_attack(game_stat_t *stats)
{
    if (stats->player.rect.top == 0) {
        stats->player.rect.left = 0;
        stats->player.rect.top = 157;
        stats->player.rect.width = 16;
        stats->player.rect.height = 34;
    }
    if (stats->player.rect.top == 64) {
        stats->player.rect.left = 16;
        stats->player.rect.top = 157;
        stats->player.rect.width = 16;
        stats->player.rect.height = 34;
    }
    player_attack2(stats);
}
