/*
** EPITECH PROJECT, 2019
** enemies_rect
** File description:
** rpg
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void rect_chose2_1(sfVector2f vector, game_t *game, int tmp)
{
    if (game->stats->player.position.x < vector.x) {
        if (game->stats->player.position.y - vector.y
            > vector.x - game->stats->player.position.x)
            game->scenes[game->settings->current].objs[tmp].rect.top = 0;
        else
            game->scenes[game->settings->current].objs[tmp].rect.top = 96;
    }
    if (game->stats->player.position.x > vector.x) {
        if (game->stats->player.position.y - vector.y
            > game->stats->player.position.x - vector.x)
            game->scenes[game->settings->current].objs[tmp].rect.top = 0;
        else
            game->scenes[game->settings->current].objs[tmp].rect.top = 32;
    }
}

void rect_chose2(sfVector2f vector, game_t *game, int tmp)
{
    if (game->stats->player.position.y > vector.y)
        rect_chose2_1(vector, game, tmp);
}

void rect_chose_1(sfVector2f vector, game_t *game, int tmp)
{
    if (game->stats->player.position.x < vector.x) {
        if (vector.y - game->stats->player.position.y
            > vector.x - game->stats->player.position.x)
            game->scenes[game->settings->current].objs[tmp].rect.top = 64;
        else
            game->scenes[game->settings->current].objs[tmp].rect.top = 96;
    }
    if (game->stats->player.position.x > vector.x) {
        if (vector.y - game->stats->player.position.y
            > game->stats->player.position.x - vector.x)
            game->scenes[game->settings->current].objs[tmp].rect.top = 64;
        else
            game->scenes[game->settings->current].objs[tmp].rect.top = 32;
    }
}

void rect_chose(sfVector2f vector, game_t *game, int tmp)
{
    if (game->stats->player.position.y < vector.y)
        rect_chose_1(vector, game, tmp);
    rect_chose2(vector, game, tmp);
}
