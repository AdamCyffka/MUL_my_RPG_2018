/*
** EPITECH PROJECT, 2019
** enemies_move
** File description:
** rpg
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void rect_chose2(sfVector2f vector, game_stat_t *stats,
    game_scene_t *scenes, int tmp)
{
    if (stats->player.position.y > vector.y) {
        if (stats->player.position.x < vector.x) {
            if (stats->player.position.y - vector.y
                > vector.x - stats->player.position.x)
                scenes[beach].objs[tmp].rect.top = 0;
            else
                scenes[beach].objs[tmp].rect.top = 96;
        }
        if (stats->player.position.x > vector.x) {
            if (stats->player.position.y - vector.y
                > stats->player.position.x - vector.x)
                scenes[beach].objs[tmp].rect.top = 0;
            else
                scenes[beach].objs[tmp].rect.top = 32;
        }
    }
}

void rect_chose(sfVector2f vector, game_stat_t *stats,
    game_scene_t *scenes, int tmp)
{
    if (stats->player.position.y < vector.y) {
        if (stats->player.position.x < vector.x) {
            if (vector.y - stats->player.position.y
                > vector.x - stats->player.position.x)
                scenes[beach].objs[tmp].rect.top = 64;
            else
                scenes[beach].objs[tmp].rect.top = 96;
        }
        if (stats->player.position.x > vector.x) {
            if (vector.y - stats->player.position.y
                > stats->player.position.x - vector.x)
                scenes[beach].objs[tmp].rect.top = 64;
            else
                scenes[beach].objs[tmp].rect.top = 32;
        }
    }
    rect_chose2(vector, stats, scenes, tmp);
}

void move_rect_enemies(game_scene_t *scenes,
    game_stat_t *stats, int tmp, game_setting_t *settings)
{
    sfVector2f vector = sfSprite_getPosition(scenes[beach].objs[tmp].sprite);
    if (((stats->player.position.y < vector.y
        && stats->player.position.y > vector.y - 700)
        || (stats->player.position.y > vector.y
        && stats->player.position.y < vector.y + 700))
        && ((stats->player.position.x < vector.x
        && stats->player.position.x > vector.x - 700)
        || (stats->player.position.x > vector.x
        && stats->player.position.x < vector.x + 700))) {
        if (scenes[settings->current].objs[tmp].rect.left < 48)
            scenes[settings->current].objs[tmp].rect.left += 16;
        else if (scenes[settings->current].objs[tmp].rect.top != 128)
            scenes[beach].objs[tmp].rect.left = 0;
        if (scenes[settings->current].objs[tmp].rect.top == 128)
            scenes[settings->current].objs[tmp].rect.left += 16;
        sfSprite_setTextureRect(scenes[settings->current].objs[tmp].sprite,
                                scenes[settings->current].objs[tmp].rect);
    }
}

void enemies_move_to_player(game_scene_t *scenes,
    game_stat_t *stats, int tmp, float delta_time)
{
    sfVector2f vector = sfSprite_getPosition(scenes[beach].objs[tmp].sprite);

    if (((stats->player.position.y < vector.y
        && stats->player.position.y > vector.y - 700)
        || (stats->player.position.y > vector.y
        && stats->player.position.y < vector.y + 700))
        && ((stats->player.position.x < vector.x
        && stats->player.position.x > vector.x - 700)
        || (stats->player.position.x > vector.x
        && stats->player.position.x < vector.x + 700))) {
        rect_chose(vector, stats, scenes, tmp);
        enemies_positions(scenes, stats, tmp, delta_time);
    }
}

void enemies_detect_player(game_setting_t *settings,
    game_scene_t *scenes, game_stat_t *stats, float delta_time)
{
    if (settings->current == beach) {
        if (scenes[beach].objs[SKELETON_O_S4].speed > 0)
            enemies_move_to_player(scenes, stats, SKELETON_O_S4, delta_time);
    }
}
