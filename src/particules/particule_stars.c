/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** Particules functions
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void particules_star2(game_t *game, int tmp)
{
    sfVector2f vector = game->stats->player.position;
    float speed = game->scenes[TOWN].objs[STAR_O_S1].speed;
    if (game->scenes[TOWN].objs[STAR_O_S1].speed < ((tmp + 1) * 100.0)) {
        if (speed > 100)
            speed -= 100 * tmp;
        vector.y -= 4 * speed;
        vector.x -= 0.3 * speed;
        sfSprite_setScale(game->scenes[TOWN].objs[STAR_O_S1].sprite,
        (sfVector2f) {speed / 1 / 10,
        speed / 1 / 10});
        sfSprite_setPosition(game->scenes[TOWN].objs[STAR_O_S1].sprite, vector);
        game->scenes[TOWN].objs[STAR_O_S1].speed++;
    }
    if (game->scenes[TOWN].objs[STAR_O_S1].speed == ((tmp + 1) * 100.0)) {
        sfSprite_setScale(game->scenes[TOWN].objs[STAR_O_S1].sprite,
        (sfVector2f) {1, 1});
        sfSprite_setPosition(game->scenes[TOWN].objs[STAR_O_S1].sprite,
        (sfVector2f) {-500, -500});
        game->scenes[TOWN].objs[STAR_O_S1].speed++;
    }
}

void particules_star(game_t *game)
{
    for (int tmp = INTRO_Q; tmp <= BOSS_Q; tmp++)
        if (game->quests[tmp].state == Q_FINISHED)
            particules_star2(game, tmp);
}