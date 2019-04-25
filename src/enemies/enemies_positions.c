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
        for (int tmp = SKELETON1_O_S4; tmp <= SKELETON20_O_S4; tmp++)
            move_rect_enemies(game->scenes, game->stats, tmp, game->settings);
    }
}

void enemies_positions(game_scene_t *scenes,
    game_stat_t *stats, int tmp, float delta_time)
{
    sfVector2f vector = sfSprite_getPosition(scenes[beach].objs[tmp].sprite);

    if (stats->player.position.y < vector.y)
        vector.y -= scenes[beach].objs[tmp].speed * delta_time;
    if (stats->player.position.y > vector.y)
        vector.y += scenes[beach].objs[tmp].speed * delta_time;
    if (stats->player.position.x < vector.x)
        vector.x -= scenes[beach].objs[tmp].speed * delta_time;
    if (stats->player.position.x > vector.x)
        vector.x += scenes[beach].objs[tmp].speed * delta_time;
    sfSprite_setPosition(scenes[beach].objs[tmp].sprite, vector);
    sfSprite_setTextureRect(scenes[beach].objs[tmp].sprite,
                            scenes[beach].objs[tmp].rect);
}
