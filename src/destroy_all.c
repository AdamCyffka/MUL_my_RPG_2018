/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** destroy_all
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void destroy_window(game_t *game)
{
    sfRenderWindow_destroy(game->settings->window);
}

void destroy_event(game_t *game)
{
    free(game->settings->event);
}

void destroy_texts(game_text_t **text)
{
    if (text == NULL)
        return;
    for (unsigned int i = 0; text[i] != NULL; i++)
        sfText_destroy(text[i]);
}

void destroy_scene(game_scene_t *scene)
{
    //destroy_objs();
    //destroy_sounds();
    //Destroy_buttons();
    //destroy_texts(text);
    free(scene);
}

void destroy_scenes(game_scene_t **scenes)
{
    int i = 0;

    if (scenes == NULL)
        return;
    while (scenes[i] != NULL) {
        destroy_scene(scenes[i]);
        i++;
    }
    free(scenes);
}

void destroy_textures(game_object_t **textures)
{
    if (textures == NULL)
        return;
    for (unsigned int i = 0; textures[i] != NULL; i++) {
        sfTexture_destroy(textures[i]->texture);
        free(textures[i]);
    }
    free(textures);
}

void destroy_musics(game_sound_t **musics)
{
    int i = 0;

    if (musics == NULL)
        return;
    while (musics[i] != NULL) {
        sfMusic_destroy(musics[i]);
        i++;
    }
    free(musics);
}

void destroy_fonts(game_text_t **fonts)
{
    int i = 0;

    if (fonts == NULL)
        return;
    while (fonts[i] != NULL) {
        sfFont_destroy(fonts[i]->font);
        free(fonts[i]);
        i++;
    }
    free(fonts);
}

void destroy_all(game_t *game, game_object_t **textures)
{
    destroy_window(game);
    destroy_event(game);
    //destroy_textures(game->scenes->objs->texture);
    destroy_musics(game->scenes->sounds->music);
    destroy_fonts(game->scenes->texts->font);
    //sfClock_destroy();
    free(game);
}
