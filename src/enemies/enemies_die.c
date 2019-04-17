/*
** EPITECH PROJECT, 2019
** enemies_die
** File description:
** rpg
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void rect_die(game_scene_t *scenes, int tmp, game_setting_t *settings)
{
    scenes[settings->current].objs[tmp].rect.left = 0;
    scenes[settings->current].objs[tmp].rect.top = 128;
    scenes[settings->current].objs[tmp].rect.height = 17;
    sfSprite_setTextureRect(scenes[settings->current].objs[tmp].sprite,
                                scenes[settings->current].objs[tmp].rect);
    scenes[settings->current].objs[SKELETON_O_S4].speed = 0;
}

void enemies_die2(game_scene_t *scenes, game_stat_t *stats,
    int tmp, game_setting_t *settings)
{
    sfVector2f vector = sfSprite_getPosition(
    scenes[settings->current].objs[tmp].sprite);

    if (stats->player.rect.top == 157 && stats->player.rect.left == 0) {
        if ((vector.y > stats->player.position.y &&
            vector.y - 120 < stats->player.position.y)
            && (vector.x - 10 < stats->player.position.x &&
            vector.x + 50 > stats->player.position.x))
            rect_die(scenes, tmp, settings);
    }
    if (stats->player.rect.top == 157 && stats->player.rect.left == 16) {
        if ((vector.y < stats->player.position.y &&
            vector.y + 120 > stats->player.position.y)
            && (vector.x - 10 < stats->player.position.x &&
                vector.x + 50 > stats->player.position.x))
            rect_die(scenes, tmp, settings);
    }
}

void enemies_die(game_scene_t *scenes, game_stat_t *stats,
    int tmp, game_setting_t *settings)
{
    sfVector2f vector = sfSprite_getPosition(
    scenes[settings->current].objs[tmp].sprite);

    if (stats->player.rect.top == 129 && stats->player.rect.left == 0) {
        if ((vector.x > stats->player.position.x &&
            vector.x - 100 < stats->player.position.x)
            && (vector.y - 50 < stats->player.position.y &&
            vector.y + 80 > stats->player.position.y))
            rect_die(scenes, tmp, settings);
    }
    if (stats->player.rect.top == 129 && stats->player.rect.left == 32) {
        if ((vector.x < stats->player.position.x &&
            vector.x + 100 > stats->player.position.x)
            && (vector.y - 50 < stats->player.position.y &&
            vector.y + 80 > stats->player.position.y))
            rect_die(scenes, tmp, settings);
    }
    enemies_die2(scenes, stats, SKELETON_O_S4, settings);
}

void enemies_detect_hit(game_setting_t *settings, game_scene_t *scenes,
    game_stat_t *stats)
{
    if (settings->current == beach) {
        if (scenes[beach].objs[SKELETON_O_S4].speed > 0)
            enemies_die(scenes, stats, SKELETON_O_S4, settings);
    }
}
