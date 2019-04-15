/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** All function to print main_menu
*/

#include "struct.h"
#include "enum.h"
#include "rpg.h"

void move_my_second_flamingo(game_scene_t *scene)
{
    if (scene->objs[FLAMINGO2_O_S0].rect.left <= 0)
        scene->objs[FLAMINGO2_O_S0].rect.left = 156;
    else
        scene->objs[FLAMINGO2_O_S0].rect.left -= 52;
}

void move_my_first_flamingo(game_scene_t *scene)
{
    if (scene->objs[FLAMINGO1_O_S0].rect.left >= 312)
        scene->objs[FLAMINGO1_O_S0].rect.left = 0;
    else
        scene->objs[FLAMINGO1_O_S0].rect.left += 105;
}

void move_sprite_main_menu(game_scene_t *scene)
{
    move_my_first_flamingo(scene);
    move_my_second_flamingo(scene);
    for (int i = 1; i < 4; i++)
        if (scene->objs[i].position.x <= -150)
            scene->objs[i].position.x = 1950;
    scene->objs[CLOUD1_O_S0].position.x -= scene->objs[CLOUD1_O_S0].speed;
    scene->objs[CLOUD2_O_S0].position.x -= scene->objs[CLOUD2_O_S0].speed;
    scene->objs[CLOUD3_O_S0].position.x -= scene->objs[CLOUD3_O_S0].speed;
    scene->objs[FLAMINGO1_O_S0].position.x -= scene->objs[FLAMINGO1_O_S0].speed;
    scene->objs[FLAMINGO2_O_S0].position.x -= scene->objs[FLAMINGO2_O_S0].speed;
}

void change_main_menu(game_setting_t *settings, game_scene_t *scene)
{
    button_menu(settings, scene[main_menu]);
    for (int i = 0; i < scene->how_many[0]; i++) {
        sfSprite_setTextureRect(scene->objs[i].sprite, scene->objs[i].rect);
        sfSprite_setPosition(scene->objs[i].sprite,
        scene->objs[i].position);
    }
}