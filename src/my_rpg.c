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
    set_scale(game);
    /*for (int tmp = 0; tmp < game->scenes->how_many[1]; tmp++) {
        if (game->scenes->sounds[tmp]._activated == true)
            if (game->settings->current == town)
                sfMusic_play(game->scenes->sounds[MUSIC_S_S0].music);
    }*/
    if (game->settings->current == main_menu)
        sfSprite_setPosition(game->scenes->objs[CURSOR_O_S0].sprite, game->settings->cursor_pos);
        change_main_menu(game->settings, game->scenes);
    if (game->settings->current >= town && game->settings->current <= camp)
        change_maps(game);
    if (game->settings->current >= victory && game->settings->current <= defeat)
        change_vic_def(game);
    enemies_detect_player(game);
    enemies_detect_hit(game);
    clock(game->scenes, game->settings, game->quests);
    loop_rect_enemies(game);
    player_rect_move(game->scenes, game->stats, game->settings);
}

void draw_scene(game_scene_t scene, game_setting_t *settings, game_stat_t
*stats)
{
    for (int tmp = 0; tmp < scene.how_many[0]; tmp++) {
        if (scene.objs[tmp].speed >= 0)
            sfRenderWindow_drawSprite(settings->window, scene.objs[tmp]
            .sprite, NULL);
    }
    for (int tmp = 0; tmp < scene.how_many[2]; tmp++)
        if (scene.buttons[tmp].state >= 0)
            sfRenderWindow_drawRectangleShape(settings->window, scene
            .buttons[tmp].shape, NULL);
    if (settings->current >= town && settings->current <= camp && stats->player.speed != -1)
        sfRenderWindow_drawSprite(settings->window, stats->player.sprite, NULL);
    for (int tmp = 0; tmp < scene.how_many[3]; tmp++)
        if (scene.texts[tmp].state >= 0)
            sfRenderWindow_drawText(settings->window, scene.texts[tmp].text,
            NULL);
    if (settings->current == main_menu)
        sfRenderWindow_drawSprite(settings->window, scene.objs[CURSOR_O_S0].sprite, NULL);
}

int my_rpg(void)
{
    game_t *game = malloc(sizeof(game_t));
    game = create_game(game);

    while (sfRenderWindow_isOpen(game->settings->window)) {
        sfRenderWindow_clear(game->settings->window, sfBlack);
        game_change(game);
        draw_scene(game->scenes[game->settings->current],
        game->settings, game->stats);
        draw_quest(game->quests, game->settings);
        while (sfRenderWindow_pollEvent(game->settings->window,
        &game->settings->event))
            analyse_events(game);
        sfRenderWindow_display(game->settings->window);
    }
    //destroy_all(game);
    return (0);
}
