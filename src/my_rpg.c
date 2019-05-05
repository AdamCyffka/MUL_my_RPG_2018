/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** main functions
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void draw_scene2(game_scene_t scene, game_setting_t *settings, game_stat_t
*stats)
{
    for (int tmp = 0; tmp < scene.how_many[2]; tmp++)
        if (scene.buttons[tmp].state >= 0)
            sfRenderWindow_drawRectangleShape(settings->window,
            scene.buttons[tmp].shape, NULL);
    for (int tmp = 0; tmp < scene.how_many[3]; tmp++)
        if (scene.texts[tmp].state >= 0)
            sfRenderWindow_drawText(settings->window, scene.texts[tmp].text,
            NULL);
    if (settings->current == MAIN_MENU && stats->player.speed > 0)
        sfRenderWindow_drawSprite(settings->window, stats->player.sprite, NULL);
    draw_cursor(scene, settings);
}

void draw_scene(game_scene_t scene, game_setting_t *settings, game_stat_t
*stats)
{
    for (int tmp = 0; tmp < scene.how_many[0]; tmp++)
        if (scene.objs[tmp].speed == 0)
            sfRenderWindow_drawSprite(settings->window,
            scene.objs[tmp].sprite, NULL);
    if (stats->player.speed > 0)
        sfRenderWindow_drawSprite(settings->window, stats->player.sprite, NULL);
    for (int tmp = 0; tmp < scene.how_many[0]; tmp++)
        if (scene.objs[tmp].speed >= 1)
            sfRenderWindow_drawSprite(settings->window, scene.objs[tmp]
            .sprite, NULL);
    draw_scene2(scene, settings, stats);
}

void game_loop(game_t *game)
{
    while (sfRenderWindow_isOpen(game->settings->window)) {
        sfRenderWindow_clear(game->settings->window, sfBlack);
        game_change(game);
        draw_scene(game->scenes[game->settings->current],
        game->settings, game->stats);
        if (game->settings->current != MAIN_MENU) {
            draw_quest(game->quests, game->settings);
            draw_inventory(game->scenes, game->inventory, game->settings);
        }
        draw_player_info(game);
        while (sfRenderWindow_pollEvent(game->settings->window,
        &game->settings->event))
            analyse_events(game);
        sfRenderWindow_display(game->settings->window);
    }
}

int my_rpg(void)
{
    game_t *game = malloc(sizeof(game_t));

    if (game == NULL)
        return 84;
    game = create_game(game);
    if (game == NULL)
        return 84;
    if (assets_load(game) == 84)
        return 84;
    game_loop(game);
    destroy_all(game);
    return (0);
}
