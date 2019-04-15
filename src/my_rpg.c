/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** main functions
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void game_change(game_t *game)
{
    //buttons_activation(game);
    if (game->settings->current == main_menu)
        change_main_menu(game->settings, game->scenes);
    if (game->settings->current == town)
        set_scale_town(game->scenes[town], game->stats, game->settings);
    if (game->settings->current >= town && game->settings->current <= camp)
        quests_interaction();
    clock(game->scenes, game->settings);
}

void scene_selection(game_setting_t *settings, game_scene_t *scenes)
{
    settings->current = town;
}

void draw_scene(game_scene_t scene, game_setting_t *settings, game_stat_t
*stats)
{
    for (int tmp = 0; tmp < scene.how_many[0]; tmp++) {
        if (scene.objs[tmp].speed >= 0)
            sfRenderWindow_drawSprite(settings->window, scene.objs[tmp]
            .sprite, NULL);
    }
    sfRenderWindow_drawSprite(settings->window, stats->player.sprite, NULL);
    //for (int tmp = 0; tmp < scene.how_many[1]; tmp++)
        //sfMusic_play(scene.sounds[tmp].music);
    for (int tmp = 0; tmp < scene.how_many[2]; tmp++) {
        if (scene.buttons[tmp].state >= 0)
            sfRenderWindow_drawRectangleShape(settings->window, scene
            .buttons[tmp].shape, NULL);
    }
    for (int tmp = 0; tmp < scene.how_many[3]; tmp++)
        if (scene.texts[tmp].state >= 0)
            sfRenderWindow_drawText(settings->window, scene.texts[tmp].text,
            NULL);
}

int my_rpg(void)
{
    game_t *game = malloc(sizeof(game_t));
    game = create_game(game);

    while (sfRenderWindow_isOpen(game->settings->window)) {
        sfRenderWindow_clear(game->settings->window, sfBlack);
        scene_selection(game->settings, game->scenes);
        game_change(game);
        draw_scene(game->scenes[game->settings->current],
        game->settings, game->stats);
        while (sfRenderWindow_pollEvent(game->settings->window,
        &game->settings->event))
            analyse_events(game);
        sfRenderWindow_display(game->settings->window);
    }
    destroy_all(game);
    return (0);
}