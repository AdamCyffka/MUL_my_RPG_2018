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
    set_cursor_pos(game->scenes[game->settings->current], game->settings);
    /*for (int tmp = 0; tmp < game->scenes[game->settings->current].how_many[1]; tmp++) {
        if (game->scenes[game->settings->current].sounds[tmp]._activated == true)
                sfMusic_play(game->scenes->sounds[MUSIC_S_S1].music);
    }*/
    if (game->settings->current == MAIN_MENU)
        change_main_menu(game->settings, game->scenes);
    if (game->settings->current >= TOWN && game->settings->current <= CAMP)
        change_maps(game);
    if (game->settings->current >= VICTORY && game->settings->current <= DEFEAT)
        change_vic_def(game);
    clock(game->scenes, game->settings, game->quests);
    if (game->settings->_paused == false) {
        player_interaction(game);
        enemies_detect_player(game);
        enemies_detect_hit(game);
        enemies_attack_player(game);
        loop_rect_enemies(game);
    }
    player_rect_move(game->scenes, game->stats, game->settings);
}

void draw_scene(game_scene_t scene, game_setting_t *settings, game_stat_t
*stats)
{
    for (int tmp = 0; tmp < scene.how_many[0]; tmp++)
        if (scene.objs[tmp].speed == 0)
            sfRenderWindow_drawSprite(settings->window, scene.objs[tmp]
            .sprite, NULL);
    sfRenderWindow_drawSprite(settings->window, stats->player.sprite, NULL);
    for (int tmp = 0; tmp < scene.how_many[0]; tmp++)
        if (scene.objs[tmp].speed >= 1)
            sfRenderWindow_drawSprite(settings->window, scene.objs[tmp]
            .sprite, NULL);
    for (int tmp = 0; tmp < scene.how_many[2]; tmp++)
        if (scene.buttons[tmp].state >= 0)
            sfRenderWindow_drawRectangleShape(settings->window, scene
            .buttons[tmp].shape, NULL);
    for (int tmp = 0; tmp < scene.how_many[3]; tmp++)
        if (scene.texts[tmp].state >= 0)
            sfRenderWindow_drawText(settings->window, scene.texts[tmp].text,
            NULL);
    draw_cursor(scene, settings);
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
        draw_inventory(game->inventory, game->settings);
        while (sfRenderWindow_pollEvent(game->settings->window,
        &game->settings->event))
            analyse_events(game);
        sfRenderWindow_display(game->settings->window);
    }
    //destroy_all(game);
    return (0);
}
