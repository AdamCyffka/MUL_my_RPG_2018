/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** assets_load_scenes
*/

#include "rpg.h"
#include "enum.h"

int assets_load_texts(game_text_t *texts, int nb)
{
    for (int tmp = 0; tmp < nb; tmp++)
        if (texts[tmp].font == NULL || texts[tmp].text == NULL)
            return 84;
    return 0;
}

int assets_load_buttons(game_button_t *buttons, int nb)
{
    for (int tmp = 0; tmp < nb; tmp++)
        if (buttons[tmp].texture == NULL || buttons[tmp].shape == NULL)
            return 84;
    return 0;
}

int assets_load_sounds(game_sound_t *sounds, int nb)
{
    for (int tmp = 0; tmp < nb; tmp++)
        if (sounds[tmp].music == NULL)
            return 84;
    return 0;
}

int assets_load_objs(game_object_t *objs, int nb)
{
    for (int tmp = 0; tmp < nb; tmp++)
        if (objs[tmp].texture == NULL || objs[tmp].sprite == NULL)
            return 84;
    return 0;
}

int assets_load_scenes(game_scene_t *scenes)
{
    for (int tmp = MAIN_MENU; tmp <= DEFEAT; tmp++) {
        if (assets_load_objs(scenes[tmp].objs,
        scenes[tmp].how_many[0]) == 84)
            return 84;
        if (assets_load_sounds(scenes[tmp].sounds,
        scenes[tmp].how_many[1]) == 84)
            return 84;
        if (assets_load_buttons(scenes[tmp].buttons,
        scenes[tmp].how_many[2]) == 84)
            return 84;
        if (assets_load_texts(scenes[tmp].texts,
        scenes[tmp].how_many[3]) == 84)
            return 84;
    }
    return 0;
}