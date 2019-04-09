/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** main functions
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void analyse_events(sfRenderWindow *window, game_setting_t *settings,
    game_stat_t *stats)
{
    if (settings->event.type == sfEvtClosed || sfKeyboard_isKeyPressed(sfKeyTab)
    == sfTrue)
        sfRenderWindow_close(window);
    if (settings->event.type == sfEvtMouseMoved) {
        settings->cursor_pos.x = settings->event.mouseMove.x;
        settings->cursor_pos.y = settings->event.mouseMove.y;
    }
    if (settings->event.type == sfEvtKeyPressed)
        key_to_move_or_not(window, settings, stats);
    else if (settings->event.type == sfEvtMouseButtonPressed)
        player_attack(stats);
    else
        player_stop_moving(stats);
}

void clock(game_scene_t *scene, game_setting_t *settings)
{
    sfClock *clock = sfClock_create();
    sfTime time;
    float seconds;
    while (1) {
        time = sfClock_getElapsedTime(clock);
        seconds = time.microseconds / 1000000.0;
        if (seconds > 0.1) {
            move_sprite_main_menu(scene);
            sfClock_restart(clock);
            break;
        }
    }
}

void game_change(game_t *game)
{
    if (game->settings->current == main_menu) {
        button_menu(game->settings, game->scenes[main_menu]);
        for (int i = 0; i < game->scenes->how_many[0]; i++) {
            sfSprite_setTextureRect(game->scenes->objs[i].sprite,
            game->scenes->objs[i].rect);
            sfSprite_setPosition(game->scenes->objs[i].sprite,
            game->scenes->objs[i].position);
        }
    }
    if (game->settings->current >= town && game->settings->current <= camp)
        quests_interaction(game);
    clock(game->scenes, game->settings);
}

void scene_selection(game_setting_t *settings, game_scene_t *scenes)
{
    settings->current = main_menu;
}

void draw_scene(game_scene_t scene, game_setting_t *settings, game_stat_t
*stat)
{
    for (int tmp = 0; tmp < scene.how_many[0]; tmp++) {
        if (scene.objs[tmp].speed >= 0)
            sfRenderWindow_drawSprite(settings->window, scene.objs[tmp]
            .sprite, NULL);
    }
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
    /*sfSprite_setScale(stats->player.sprite, (sfVector2f) {4, 4});
    sfSprite_setScale(scene.objs[TOWN_O_S1].sprite, (sfVector2f) {3.5, 3.5});
    sfRenderWindow_drawSprite(window, scene.objs[TOWN_O_S1].sprite, NULL);
    sfRenderWindow_drawSprite(window, stats->player.sprite, NULL);*/
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
            analyse_events(game->settings->window, game->settings, game->stats);
        sfRenderWindow_display(game->settings->window);
    }
    destroy_all(game);
    return (0);
}
