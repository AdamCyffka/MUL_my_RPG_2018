/*
** EPITECH PROJECT, 2019
** enemies_attack
** File description:
** rpg
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void attack_player(game_scene_t *scenes,
    game_stat_t *stats, int tmp, game_setting_t *settings)
{
    sfVector2f vector;

    if (settings->current == DEFEAT)
        return;
    vector = sfSprite_getPosition(
    scenes[settings->current].objs[tmp].sprite);
    if (((stats->player.position.y < vector.y
        && stats->player.position.y > vector.y - 80)
        || (stats->player.position.y > vector.y
        && stats->player.position.y < vector.y + 80))
        && ((stats->player.position.x < vector.x
        && stats->player.position.x > vector.x - 80)
        || (stats->player.position.x > vector.x
        && stats->player.position.x < vector.x + 80))) {
        stats->life -= scenes[settings->current].objs[tmp].speed;
        if (stats->life <= 0) {
            stats->player.speed = -1;
            sfMusic_play(scenes[DEFEAT].sounds[SOUND_S_S7].music);
            settings->current = DEFEAT;
        }
    }
}

void enemies_attack_player(game_t *game)
{
    if (game->settings->last_time < (game->settings->timers.enemies_attack + 4))
        return;
    else
        game->settings->timers.enemies_attack = game->settings->last_time;
    if (game->settings->current == BEACH) {
        for (int tmp = SKELETON1_O_S4; tmp <= SKELETON20_O_S4; tmp++) {
            if (game->scenes[BEACH].objs[tmp].speed > 0)
                attack_player(game->scenes, game->stats, tmp, game->settings);
        }
    }
    if (game->settings->current == CAMP) {
        for (int tmp = GOLEM1_O_S5; tmp <= GOLEM10_O_S5; tmp++) {
            if (game->scenes[CAMP].objs[tmp].speed > 0)
                attack_player(game->scenes, game->stats, tmp, game->settings);
        }
    }
    if (game->settings->current == FOREST) {
        for (int tmp = GHOST1_O_S3; tmp <= GHOST15_O_S3; tmp++) {
            if (game->scenes[FOREST].objs[tmp].speed > 0)
                attack_player(game->scenes, game->stats, tmp, game->settings);
        }
    }
    if (game->settings->current == BOSS)
        if (game->scenes[BOSS].objs[SHAMAN_O_S2].speed > 0)
                attack_player(game->scenes, game->stats, SHAMAN_O_S2, game->settings);
}
