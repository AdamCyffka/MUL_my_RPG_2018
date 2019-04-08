/*
** EPITECH PROJECT, 2019
** print_main_menu.c
** File description:
** All function to print main_menu
*/

#include "struct.h"
#include "enum.h"
#include "rpg.h"

void move_sprite_main_menu(game_scene_t *scene)
{
    if (scene->objs[FLAMINGO_O_S0].rect.left >= 312)
        scene->objs[FLAMINGO_O_S0].rect.left = 0;
    else
        scene->objs[FLAMINGO_O_S0].rect.left += 105;
    scene->objs[FLAMINGO_O_S0].position.x -= 5;
    if (scene->objs[CLOUD1_O_S0].position.x <= -550)
        scene->objs[CLOUD1_O_S0].position.x = 1950;
    if (scene->objs[CLOUD2_O_S0].position.x <= -150)
        scene->objs[CLOUD2_O_S0].position.x = 1900;
    scene->objs[CLOUD1_O_S0].position.x -= 1;
    scene->objs[CLOUD2_O_S0].position.x -= 3;
}

void print_all_main_menu(game_scene_t scene, game_setting_t *settings)
{
    sfRenderWindow_drawSprite(settings->window, scene.objs[BG_O_S0].sprite,
    NULL);
    sfRenderWindow_drawSprite(settings->window, scene.objs[FLAMINGO_O_S0]
    .sprite, NULL);
    sfRenderWindow_drawSprite(settings->window, scene.objs[CLOUD1_O_S0]
    .sprite, NULL);
    sfRenderWindow_drawSprite(settings->window, scene.objs[CLOUD2_O_S0]
    .sprite, NULL);
    sfRenderWindow_drawSprite(settings->window, scene.objs[LOGO_O_S0].sprite,
    NULL);
    sfRenderWindow_drawRectangleShape(settings->window, scene
    .buttons[NEW_B_S0].shape, NULL);
    sfRenderWindow_drawRectangleShape(settings->window, scene
    .buttons[EXIT_B_S0].shape, NULL);
    sfRenderWindow_drawRectangleShape(settings->window, scene
    .buttons[LOAD_B_S0].shape, NULL);
    sfRenderWindow_drawRectangleShape(settings->window, scene
    .buttons[CREDITS_B_S0].shape, NULL);
    sfSprite_setTextureRect(scene.objs[FLAMINGO_O_S0].sprite,
    scene.objs[FLAMINGO_O_S0].rect);
    sfSprite_setPosition(scene.objs[FLAMINGO_O_S0].sprite,
    scene.objs[FLAMINGO_O_S0].position);
    sfSprite_setPosition(scene.objs[CLOUD1_O_S0].sprite,
    scene.objs[CLOUD1_O_S0].position);
    sfSprite_setPosition(scene.objs[CLOUD2_O_S0].sprite,
    scene.objs[CLOUD2_O_S0].position);
    if (scene.buttons[CREDITS_B_S0].state == true) {
        sfRenderWindow_drawSprite(settings->window, scene.objs[HTW_O_S0]
        .sprite, NULL);
        sfRenderWindow_drawRectangleShape(settings->window, scene
        .buttons[CLOSE_B_S0].shape, NULL);
    }
}