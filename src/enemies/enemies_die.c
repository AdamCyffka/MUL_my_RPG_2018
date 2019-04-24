/*
** EPITECH PROJECT, 2019
** enemies_die
** File description:
** rpg
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void rect_die(game_t *game, int tmp)
{
    game->scenes[game->settings->current].objs[tmp].rect.left = 0;
    game->scenes[game->settings->current].objs[tmp].rect.top = 128;
    game->scenes[game->settings->current].objs[tmp].rect.height = 17;
    sfSprite_setTextureRect(game->scenes[game->settings->current].objs[tmp].sprite,
                                game->scenes[game->settings->current].objs[tmp].rect);
    game->scenes[game->settings->current].objs[tmp].speed = 0;
    if (game->settings->current == camp
        && game->quests[GOLEMS_Q].progress < game->quests[GOLEMS_Q].nb_of_task)
        game->quests[GOLEMS_Q].progress++;
    if (game->settings->current == beach
        && game->quests[SKELETONS_Q].progress < game->quests[SKELETONS_Q].nb_of_task)
        game->quests[SKELETONS_Q].progress++;
    if (game->settings->current == forest
        && game->quests[GHOSTS_Q].progress < game->quests[GHOSTS_Q].nb_of_task)
        game->quests[GHOSTS_Q].progress++;
}

void enemies_die2(game_t *game, int tmp)
{
    sfVector2f vector = sfSprite_getPosition(
    game->scenes[game->settings->current].objs[tmp].sprite);

    if (game->stats->player.rect.top == 157 && game->stats->player.rect.left == 0) {
        if ((vector.y > game->stats->player.position.y &&
            vector.y - 120 < game->stats->player.position.y)
            && (vector.x - 10 < game->stats->player.position.x &&
            vector.x + 50 > game->stats->player.position.x))
            rect_die(game, tmp);
    }
    if (game->stats->player.rect.top == 157 && game->stats->player.rect.left == 16) {
        if ((vector.y < game->stats->player.position.y &&
            vector.y + 120 > game->stats->player.position.y)
            && (vector.x - 10 < game->stats->player.position.x &&
                vector.x + 50 > game->stats->player.position.x))
            rect_die(game, tmp);
    }
}

void enemies_die(game_t *game, int tmp)
{
    sfVector2f vector = sfSprite_getPosition(
    game->scenes[game->settings->current].objs[tmp].sprite);

    if (game->stats->player.rect.top == 129 && game->stats->player.rect.left == 0) {
        if ((vector.x > game->stats->player.position.x &&
            vector.x - 100 < game->stats->player.position.x)
            && (vector.y - 50 < game->stats->player.position.y &&
            vector.y + 80 > game->stats->player.position.y))
            rect_die(game, tmp);
    }
    if (game->stats->player.rect.top == 129 && game->stats->player.rect.left == 32) {
        if ((vector.x < game->stats->player.position.x &&
            vector.x + 100 > game->stats->player.position.x)
            && (vector.y - 50 < game->stats->player.position.y &&
            vector.y + 80 > game->stats->player.position.y))
            rect_die(game, tmp);
    }
    enemies_die2(game, tmp);
}

void enemies_detect_hit(game_t *game)
{
    if (game->settings->current == beach) {
        for (int tmp = SKELETON1_O_S4; tmp <= SKELETON20_O_S4; tmp++) {
            if (game->scenes[beach].objs[tmp].speed > 0)
                enemies_die(game, tmp);
        }
    }
}
