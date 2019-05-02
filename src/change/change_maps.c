/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** change maps
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void change_town(game_t *game)
{
    change_statics_pos_town(game->scenes[TOWN], game->settings);
}

void change_boss(game_setting_t *settings, game_scene_t scene,
game_quest_t *quests)
{
    change_statics_pos_boss(scene, settings);
}

void change_forest(game_setting_t *settings, game_scene_t scene,
game_quest_t *quests)
{
    change_statics_pos_forest(scene, settings);
}

void change_beach(game_setting_t *settings, game_scene_t scene,
game_quest_t *quests)
{
    change_statics_pos_beach(scene, settings);
}

void change_camp(game_setting_t *settings, game_scene_t scene,
game_quest_t *quests)
{
    change_statics_pos_camp(scene, settings);
}