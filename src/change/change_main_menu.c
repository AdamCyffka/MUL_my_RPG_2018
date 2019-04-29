/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** All function to print main_menu
*/

#include "struct.h"
#include "enum.h"
#include "rpg.h"

void move_position_flamingo(game_scene_t *scene, float delta_time)
{
    for (int i = 1; i < 4; i++)
        if (scene->objs[i].position.x <= -512)
            scene->objs[i].position.x = 1950;
    scene->objs[CLOUD1_O_S0].position.x -= scene->objs[CLOUD1_O_S0].speed *
    delta_time;
    scene->objs[CLOUD2_O_S0].position.x -= scene->objs[CLOUD2_O_S0].speed *
    delta_time;
    scene->objs[CLOUD3_O_S0].position.x -= scene->objs[CLOUD3_O_S0].speed *
    delta_time;
    scene->objs[FLAMINGO1_O_S0].position.x -= scene->objs[FLAMINGO1_O_S0].speed
    * delta_time;
    scene->objs[FLAMINGO2_O_S0].position.x -= scene->objs[FLAMINGO2_O_S0].speed
    * delta_time;
}

void move_sprite_main_menu(game_setting_t *settings, game_scene_t *scene, float delta_time)
{
    move_position_flamingo(scene, delta_time);
    if (settings->last_time < (settings->timers.main_menu + 1))
        return;
    else
        settings->timers.main_menu = settings->last_time;
    if (scene->objs[FLAMINGO1_O_S0].rect.left >= 312)
        scene->objs[FLAMINGO1_O_S0].rect.left = 0;
    else
        scene->objs[FLAMINGO1_O_S0].rect.left += 105;
    if (scene->objs[FLAMINGO2_O_S0].rect.left <= 0)
        scene->objs[FLAMINGO2_O_S0].rect.left = 156;
    else
        scene->objs[FLAMINGO2_O_S0].rect.left -= 52;
}

void change_view_main_menu(game_setting_t *settings)
{
    sfView *view = sfRenderWindow_getView(settings->window);

    sfView_setCenter((sfView *) {view}, (sfVector2f) {960, 540});
    sfRenderWindow_setView(settings->window, view);
}

void change_main_menu(game_setting_t *settings, game_scene_t *scene)
{
    button_menu(settings, scene[MAIN_MENU]);
    for (int i = 0; i < scene->how_many[0]; i++) {
        sfSprite_setTextureRect(scene->objs[i].sprite, scene->objs[i].rect);
        sfSprite_setPosition(scene->objs[i].sprite,
        scene->objs[i].position);
    }
}
