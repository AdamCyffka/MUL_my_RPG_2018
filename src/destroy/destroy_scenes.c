/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** destroy_scenes
*/

#include "rpg.h"
#include "enum.h"

void destroy_objs(game_object_t *objs, int nb)
{
    for (int tmp = 0; tmp < nb; tmp++) {
        sfTexture_destroy(objs[tmp].texture);
        sfSprite_destroy(objs[tmp].sprite);
    }
}

void destroy_sounds(game_sound_t *sounds, int nb)
{
    for (int tmp = 0; tmp < nb; tmp++)
        sfMusic_destroy(sounds[tmp].music);
}

void destroy_buttons(game_button_t *buttons, int nb)
{
    for (int tmp = 0; tmp < nb; tmp++) {
        sfTexture_destroy(buttons[tmp].texture);
        sfRectangleShape_destroy(buttons[tmp].shape);
    }
}

void destroy_texts(game_text_t *texts, int nb)
{
    for (int tmp = 0; tmp < nb; tmp++) {
        sfText_destroy(texts[tmp].text);
        sfFont_destroy(texts[tmp].font);
    }
}

void destroy_scenes(game_scene_t *scenes)
{
    for (int tmp = 0; tmp <= DEFEAT; tmp++) {
        destroy_objs(scenes[tmp].objs, scenes[tmp].how_many[0]);
        destroy_sounds(scenes[tmp].sounds, scenes[tmp].how_many[1]);
        destroy_buttons(scenes[tmp].buttons, scenes[tmp].how_many[2]);
        destroy_texts(scenes[tmp].texts, scenes[tmp].how_many[3]);
        free(scenes[tmp].objs);
        free(scenes[tmp].sounds);
        free(scenes[tmp].buttons);
        free(scenes[tmp].texts);
        free(scenes[tmp].how_many);
    }
    free(scenes);
}