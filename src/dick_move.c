/*
** EPITECH PROJECT, 2019
** dick_move
** File description:
** RPG
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void rect_dick(game_t *game)
{
    if (game->settings->last_time >= (game->settings->timers.dick + 1)) {
        game->settings->timers.dick = game->settings->last_time;
        if (game->scenes[TOWN].objs[DICK_O_S1].rect.left < 48)
            game->scenes[TOWN].objs[DICK_O_S1].rect.left += 16;
        else
            game->scenes[TOWN].objs[DICK_O_S1].rect.left = 0;
    }
}

void dick_move_to_case(game_t *game)
{
    sfVector2f vector;

    if (game->quests[INTRO_Q].state == Q_FINISHED
        && game->settings->current == TOWN) {
        vector = sfSprite_getPosition(
        game->scenes[TOWN].objs[DICK_O_S1].sprite);
        if (vector.y <= 500 && vector.x < 1450) {
            vector.x += 10 * game->settings->delta_time;
            game->scenes[TOWN].objs[DICK_O_S1].rect.top = 32;
            rect_dick(game);
        }
        if (vector.y < 190 * 3.5 && vector.x >= 1450) {
            vector.y += 10 * game->settings->delta_time;
            game->scenes[TOWN].objs[DICK_O_S1].rect.top = 0;
            rect_dick(game);
        }
        if (vector.y >= 190 * 3.5 && vector.x < 575 * 3.5) {
            game->scenes[TOWN].objs[DICK_O_S1].rect.top = 32;
            vector.x += 10 * game->settings->delta_time;
            rect_dick(game);
        }
        if (vector.x >= 575 * 3.5) {
            game->scenes[TOWN].objs[DICK_O_S1].rect.left = 0;
            game->scenes[TOWN].objs[DICK_O_S1].rect.top = 0;
        }
        sfSprite_setTextureRect(game->scenes[TOWN].objs[DICK_O_S1].sprite,
                                game->scenes[TOWN].objs[DICK_O_S1].rect);
        sfSprite_setPosition(game->scenes[TOWN].objs[DICK_O_S1].sprite, vector);
    }
}

void dick_move_to_spawn(game_t *game)
{
    sfVector2f vector;

    if (game->quests[INTRO_Q].state == Q_ACCEPTED
        && game->settings->current == TOWN) {
        vector = sfSprite_getPosition(
        game->scenes[TOWN].objs[DICK_O_S1].sprite);
        if (vector.y > 500 && vector.x > 1450) {
            vector.x -= 10 * game->settings->delta_time;
            game->scenes[TOWN].objs[DICK_O_S1].rect.top = 96;
            rect_dick(game);
        }
        if (vector.y > 500 && vector.x <= 1450) {
            vector.y -= 10 * game->settings->delta_time;
            game->scenes[TOWN].objs[DICK_O_S1].rect.top = 64;
            rect_dick(game);
        }
        if (vector.y <= 500 && vector.x <= 1450 && vector.x > 450) {
            game->scenes[TOWN].objs[DICK_O_S1].rect.top = 96;
            vector.x -= 10 * game->settings->delta_time;
            rect_dick(game);
        }
        if (vector.x <= 450)
            game->scenes[TOWN].objs[DICK_O_S1].rect.left = 0;
        sfSprite_setTextureRect(game->scenes[TOWN].objs[DICK_O_S1].sprite,
                                game->scenes[TOWN].objs[DICK_O_S1].rect);
        sfSprite_setPosition(game->scenes[TOWN].objs[DICK_O_S1].sprite, vector);
    }
    dick_move_to_case(game);
}
