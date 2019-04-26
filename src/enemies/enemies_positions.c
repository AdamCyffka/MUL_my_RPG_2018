/*
** EPITECH PROJECT, 2019
** enemies_positions
** File description:
** rpg
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void loop_rect_enemies(game_t *game)
{
    if (game->settings->last_time >=
        (game->settings->timers.enemies_timer + 1)) {
        game->settings->timers.enemies_timer = game->settings->last_time;
        if (game->settings->current == BEACH)
            for (int tmp = SKELETON1_O_S4; tmp <= SKELETON20_O_S4; tmp++)
                move_rect_enemies(
                game->scenes, game->stats, tmp, game->settings);
        if (game->settings->current == CAMP)
            for (int tmp = GOLEM1_O_S5; tmp <= GOLEM10_O_S5; tmp++)
                move_rect_enemies(
                game->scenes, game->stats, tmp, game->settings);
        if (game->settings->current == FOREST)
            for (int tmp = GHOST1_O_S3; tmp <= GHOST15_O_S3; tmp++)
                move_rect_enemies(
                game->scenes, game->stats, tmp, game->settings);
    }
}

void enemies_positions(game_t *game, int tmp, float delta_time)
{
    sfVector2f vector = sfSprite_getPosition(
        game->scenes[game->settings->current].objs[tmp].sprite);

    if (game->stats->player.position.y < vector.y)
        vector.y -= game->scenes[
        game->settings->current].objs[tmp].speed * delta_time;
    if (game->stats->player.position.y > vector.y)
        vector.y += game->scenes[
        game->settings->current].objs[tmp].speed * delta_time;
    if (game->stats->player.position.x < vector.x)
        vector.x -= game->scenes[
        game->settings->current].objs[tmp].speed * delta_time;
    if (game->stats->player.position.x > vector.x)
        vector.x += game->scenes[
        game->settings->current].objs[tmp].speed * delta_time;
    sfSprite_setPosition(game->scenes[
        game->settings->current].objs[tmp].sprite, vector);
    sfSprite_setTextureRect(
        game->scenes[game->settings->current].objs[tmp].sprite,
        game->scenes[game->settings->current].objs[tmp].rect);
}
