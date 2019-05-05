/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** volume_management
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

int btn_snd_four(game_scene_t *scenes, game_setting_t *settings)
{
    scenes[settings->current].sounds->volume = 100;
    sfMusic_setVolume(scenes[settings->current].sounds[settings->current].music,
    scenes->sounds->volume);
    return (0);
}

int btn_snd_three(game_scene_t *scenes, game_setting_t *settings)
{
    scenes[settings->current].sounds->volume = 50;
    sfMusic_setVolume(scenes[settings->current].sounds[settings->current].music,
    scenes->sounds->volume);
    return (0);
}

int btn_snd_two(game_scene_t *scenes, game_setting_t *settings)
{
    scenes[settings->current].sounds->volume = 25;
    sfMusic_setVolume(scenes[settings->current].sounds[settings->current].music,
    scenes[settings->current].sounds->volume);
    return (0);
}

int btn_snd_one(game_scene_t *scenes, game_setting_t *settings)
{
    scenes[settings->current].sounds->volume = 0;
    sfMusic_setVolume(scenes[settings->current].sounds[settings->current].music,
    scenes->sounds->volume);
    return (0);
}