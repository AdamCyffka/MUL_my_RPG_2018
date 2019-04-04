/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** main functions
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void analyse_events(sfRenderWindow *window, game_setting_t *settings)
{
    if (settings->event.type == sfEvtClosed)
        sfRenderWindow_close(window);
    if (settings->event.type == sfEvtMouseMoved) {
        settings->cursor_pos.x = settings->event.mouseMove.x;
        settings->cursor_pos.y = settings->event.mouseMove.y;
    }
}

void game_change(game_setting_t *settings, game_scene_t *scenes, sfRenderWindow
*window)
{
    button_menu(settings, scenes[main_menu], window);
}

void scene_selection(game_setting_t *settings, game_scene_t *scenes)
{
    settings->current = main_menu;
}

void draw_scene(game_scene_t scene, sfRenderWindow *window, int state)
{
    sfRenderWindow_drawSprite(window, scene.objs[BG2_O_S0].sprite, NULL);
    sfRenderWindow_drawSprite(window, scene.objs[LOGO_O_S0].sprite, NULL);
    for (int i = 4; i < 7; i++)
        sfRenderWindow_drawRectangleShape(window, scene.buttons[i].shape, NULL);
    sfRenderWindow_drawRectangleShape(window, scene.buttons[NEW_B_S0].shape,
        NULL);
}

int my_rpg(void)
{
    game_t *game = malloc(sizeof(game_t));
    game = create_game(game);

    while (sfRenderWindow_isOpen(game->settings->window)) {
        sfRenderWindow_clear(game->settings->window, sfBlack);
        scene_selection(game->settings, game->scenes);
        game_change(game->settings, game->scenes,
            game->settings->window);
        draw_scene(game->scenes[main_menu] , game->settings->window,
                   game->settings->current);
        while (sfRenderWindow_pollEvent(game->settings->window,
            &game->settings->event))
            analyse_events(game->settings->window, game->settings);
        sfRenderWindow_display(game->settings->window);
    }
    destroy_all(&game);
    return (0);
}